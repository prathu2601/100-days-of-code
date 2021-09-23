//Link to question
//"https://codeforces.com/problemset/problem/1366/B"

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
#define sz(a) (s).size()
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
        ll n, x, m;
        cin >> n >> x >> m;
        vector<pair<ll, ll> > vp(m);
        F0r(i, m) cin >> vp[i].fi >> vp[i].se;
        ll p = vp[0].fi, q = vp[0].se, ans = 1, y = x;
        F0r(i, m){
            if(vp[i].fi <= x and x <= vp[i].se){
                ans += x-vp[i].fi;
                x = vp[i].fi;
            }
            if(vp[i].se >= y and y >= vp[i].fi){
                ans += vp[i].se-y;
                y = vp[i].se;
            }
        }
        cout << ans << '\n';        
    }
    return 0;
}
