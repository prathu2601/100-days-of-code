//Link to question 
//"https://codeforces.com/problemset/problem/1528/A"

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

ll const m = 200005;
ll a[m][2], dp[m][2];
vector<ll> v[m];

void dfs(ll u, ll w){
    dp[u][0] = dp[u][1] = 0;
    FOR(it, v[u]){
        if(it == w)
            continue;
        dfs(it, u);
        dp[u][0] += max(abs(a[u][0] - a[it][0]) + dp[it][0], abs(a[u][0] - a[it][1]) + dp[it][1]);
        dp[u][1] += max(abs(a[u][1] - a[it][0]) + dp[it][0], abs(a[u][1] - a[it][1]) + dp[it][1]);
    }
}

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
        For(i, 1, n+1){
            v[i].clear();
            cin >> a[i][0] >> a[i][1];
        }
        F0r(i, n-1){
            ll x, y;
            cin >> x >> y;
            v[x].pb(y);
            v[y].pb(x);
        }
        dfs(1, 0);
        cout << max(dp[1][0], dp[1][1]) << '\n';
    }
    return 0;
}