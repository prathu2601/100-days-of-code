//Link to question
//"https://codeforces.com/problemset/problem/1513/C"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define each(it, a) for(auto it:a)
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
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
    
    ll x = 2e5+10;
    ll a[x];
    F0r(i, 9) a[i] = 2;
    a[9] = 3;
    For(i, 10, x) a[i] = (a[i-9]+a[i-10])%MOD;

    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        while(n > 0){
            ans = (ans + ((n%10+m < 10) ? 1 : a[n%10+m-10]))%MOD;
            n /= 10;
        }
        cout << ans << "\n";
    }
    return 0;
}