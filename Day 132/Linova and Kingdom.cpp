//Link to question
//"https://codeforces.com/problemset/problem/1336/A"

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
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
#define MOD 1000000007
#define DOM 998244353

const ll ma = 2e5+5;
vl a[ma], b;

ll dfs(ll u, ll v, ll d){
    ll res = 1;
    FOR(it, a[u]){
        if(it != v){
            res += dfs(it, u, d+1);
        }
    }
    b.pb(d-res+1);
    return res;
}

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
        ll n, k;
        cin >> n >> k;
        F0r(i, n-1){
            ll u, v;
            cin >> u >> v;
            u--;
            v--;
            a[u].pb(v);
            a[v].pb(u);
        }
        dfs(0, -1, 0);
        sort(rall(b));
        ll ans = accumulate(b.begin(), b.begin()+k, 0LL);
        cout << ans << ' ';

    }
    return 0;
}