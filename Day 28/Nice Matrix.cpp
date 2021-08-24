//Link to question
//"https://codeforces.com/problemset/problem/1422/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define fi first
#define se second
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
        ll n, m;
        cin >> n >> m;
        ll a[n][m], ans = 0;
        F0r(i, n) F0r(j, m) cin >> a[i][j];
        F0r(i, n/2){
            F0r(j, m/2){
                ll x, y, z, w;
                x = a[i][j];
                y = a[i][m-j-1];
                z = a[n-i-1][j];
                w = a[n-i-1][m-j-1];
                vector<ll>v = {x, y, z, w};
                sort(all(v));
                ll c = v[1];
                ans += abs(x-c) + abs(y-c) + abs(z-c) + abs(w-c);
            }
        }
        if(n%2){
            F0r(j, m/2){
                ll x, y;
                x = a[n/2][j];
                y = a[n/2][m-j-1];
                ans += abs(x-y);
            }
        }
        if(m%2){
            F0r(i, n/2){
                ll x, y;
                x = a[i][m/2];
                y = a[n-i-1][m/2];
                ans += abs(x-y);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}