//Link to question
//"https://codeforces.com/problemset/problem/1580/A"

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

vll sum(401,vl(401, 0));
vl x(401, 0);

ll any(ll x1, ll y1, ll x2, ll y2){
    return sum[x2][y2] + sum[x1-1][y1-1] - sum[x2][y1-1] - sum[x1-1][y2];
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
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<string> vs(n);
        F0r(i, n) cin >> vs[i];
        ll ans = INT_MAX;
        For(i, 1, n+1) For(j, 1, m+1) sum[i][j] = (vs[i-1][j-1]=='1') + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
        For(i, 1, n+1){
            For(j, i+4, n+1){
                For(k, 4, m+1) x[k] = any(i+1, 1, j-1, k-1) - any(i, 1, i, k-1) - any(j, 1, j, k-1) - any(i+1, k, j-1, k) + 2*k + j - i - 3;
                Forr(k, 3, m) x[k] = min(x[k], x[k+1]);
                Forr(k, 1, m-2) ans = min(ans, x[k+3] - any(i+1, 1, j-1, k) + any(i, 1, i, k) + any(j, 1, j, k) - any(i+1, k, j-1, k) - 2*k + j - i - 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}