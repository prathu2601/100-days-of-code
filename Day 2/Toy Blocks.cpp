//Link to question
//"https://codeforces.com/problemset/problem/1452/B"

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
        ll n;
        cin >> n;
        ll a[n];
        F0r(i, n) cin >> a[i];
        sort(a, a+n);
        ll p = a[0], q = a[n-1];
        For(i, 1, n){
            if(p == 0)
                break;
            if(a[i] < q){
                if(a[i]+p >= q){
                    p -= (q - a[i]);
                    a[i] = q;
                }
                else{
                    a[i] += p;
                    p = 0;
                    break;
                }
            }
        }
        if(p >= n-1)
            p%=(n-1);
        if(p > 0){
            cout << n - 1 - p << '\n';
        }
        else{
            ll ans = 0;
            For(i, 1, n){
                if(a[i] != q)
                    ans += q-a[i];
            }
            cout << ans << '\n';
        }
    }
    return 0;
}