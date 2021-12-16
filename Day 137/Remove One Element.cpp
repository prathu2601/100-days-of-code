//Link to question
//"https://codeforces.com/problemset/problem/1272/D"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define sz(a) (a).size()
#define con(a) {cout << a << '\n';continue;}
#define bre(a) {cout << a << '\n';break;}
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
#define YN(flag) cout << (flag?"YES":"NO") << '\n';
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

    ll t = 1;
    //cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vl a(n);
        F0r(i, n) cin >> a[i];
        ll count = 0;
        vector<pl> v;
        F0r(i, n-1){
            if(a[i] >= a[i+1]){
                v.pb(mp(i, i-count));
                count = 0;   
            }
            else count++;
        }
        v.pb(mp(n-1, n-1-count));
        ll m = sz(v);
        ll ans = max(v[0].fi-v[0].se+1, v[m-1].fi - v[m-1].se+1);
        F0r(i, m-1){
            ans = max(ans, v[i].fi-v[i].se+1);
            if(v[i+1].se-1 == v[i].fi and (a[v[i].fi] < a[v[i+1].se+1] or a[v[i].fi-1] < a[v[i+1].se])) ans = max(ans, v[i+1].fi-v[i].se);
        }
        cout << ans << '\n';
    }
    return 0;
}