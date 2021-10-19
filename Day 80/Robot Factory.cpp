//Link to question
//"https://codeforces.com/problemset/problem/1600/J"

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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll t;
    //cin >> t;
    t = 1;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vll a(n, vl(m)), b(n, vl(m, 0));
        F0r(i, n) F0r(j, m) cin >> a[i][j];
        vl v, dx = {0, 1, 0, -1}, dy = {-1, 0, 1, 0};
        queue <pl> q;
        F0r(i, n){
            F0r(j, m){
                if(!b[i][j]){
                    ll z = 1;
                    b[i][j] = 1;
                    q.push(mp(i, j));
                    while(!q.empty()){
                        auto [x, y] = q.front(); q.pop();
                        F0r(d, 4){
                            ll x1 = x + dx[d], y1 = y + dy[d];
                            if(x1 < 0 or y1 < 0 or x1 > n or y1 > m) continue;
                            if(a[x][y] & (1<<d)) continue;
                            if(!b[x1][y1]){
                                z++;
                                q.push(mp(x1, y1));
                                b[x1][y1] = 1;
                            }
                        }
                    }
                    v.pb(z);
                }
            }
        }
        sort(rall(v));
        FOR(it, v) cout << it << ' ';
    }
    return 0;
}