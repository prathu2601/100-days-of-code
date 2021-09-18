//Link to question
//"https://codeforces.com/contest/1573/problem/B"

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
        ll n;
        cin >> n;
        ll a[n], b[n];
        vector<pair<ll, ll> > v1, v2;
        F0r(i, n) cin >> a[i], v1.pb(mp(a[i], i));
        F0r(i, n) cin >> b[i], v2.pb(mp(b[i], i));
        sort(all(v1));
        sort(all(v2));
        F0r(i, n-1){
            v1[i+1].se = min(v1[i].se, v1[i+1].se);
        }
        F0rr(i, n-1){
            v2[i].se = min(v2[i].se, v2[i+1].se);
        }
        ll ans = INT_MAX;
        F0r(i, n){
            //cout << v1[i].se << ' ' << v2[i].se << '\n';
            ans = min(ans, v1[i].se+v2[i].se);
        }
        cout << ans << '\n';
    }
    return 0;
}
