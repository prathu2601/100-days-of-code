//Link to question
//"https://codeforces.com/problemset/problem/1419/C"

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
        ll n, x;
        cin >> n >> x;
        ll a[n], b[n], sum = 0;
        F0r(i, n) cin >> a[i], b[i] = x - a[i], sum += b[i];
        sort(b, b+n);
        if(b[0] == b[n-1] and b[0] == 0)
            cout << "0\n";
        else{
            ll an = 0, flag = 0;
            F0r(i, n){
                if(b[i] == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag or sum == 0)
                cout << "1\n";
            else
                cout << "2\n";
        }
    }
    return 0;
}