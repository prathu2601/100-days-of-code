//Link to question
//"https://codeforces.com/problemset/problem/1355/A"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
#define MOD 1000000007
#define DOM 998244353

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        k--;
        ll prev = n;
        while(k > 0){
            ll mi = 10, ma = 0;
            while(n > 0){
                mi = min(mi, n%10);
                ma = max(ma, n%10);
                n/=10;
            }
            if(mi == 0)
                break;
            n = prev + ma*mi;
            prev = n;
            k--;
        }
        cout << prev << '\n';
    }
    return 0;
}