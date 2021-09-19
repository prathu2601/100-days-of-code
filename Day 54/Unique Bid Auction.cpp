//Link to question
//"https://codeforces.com/problemset/problem/1454/B"

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
        ll a[n], flag = 0;
        vector<pair<ll, ll> > vp;
        F0r(i, n) cin >> a[i], vp.pb(mp(a[i], i+1));
        if(n == 1){
            cout << a[0] << '\n';
            continue;
        }
        sort(all(vp));
        ll ans = -1;
        if(vp[0].fi != vp[1].fi){
            flag = 1;
            ans = vp[0].se;
        }
        For(i, 1, n-1){
            if(vp[i].fi != vp[i+1].fi and vp[i].fi != vp[i-1].fi and !flag){
                flag = 1;
                ans = vp[i].se;
                break;
            }
        }
        if(vp[n-1].fi != vp[n-2].fi and !flag)
            ans = vp[n-1].se;
        cout << ans << '\n';
    }
    return 0;
}
