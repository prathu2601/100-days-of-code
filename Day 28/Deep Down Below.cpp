//Link to question
//"https://codeforces.com/contest/1561/problem/C"

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
        ll n;
        cin >> n;
        ll k[n], b[n];
        vector<pair<ll, ll> > vp;
        F0r(i, n){
            cin >> k[i];
            ll m = k[i], a[m];
            F0r(j, m) cin >> a[j];
            ll ma = a[m-1]+1, q = m;
            F0rr(j, m-1){
                ma = max(ma-1, a[j]+1);
            }
            b[i] = ma;
            vp.pb(mp(ma, m));
            //cout << ma << ' ';
        }
        //cout << '\n';
        sort(all(vp));
        ll ans = vp[0].fi;
        For(i, 1, n){
            ans = max(ans, vp[i].fi-vp[i-1].se);
            vp[i].se += vp[i-1].se;
        }
        cout << ans << '\n';
    }
    return 0;
}