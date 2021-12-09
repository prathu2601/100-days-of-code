//Link to question
//"https://codeforces.com/problemset/problem/1611/E1"

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

    ll t = 1;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        queue<ll> q;
        vl a(n, -1), b[n];
        ll flag = 0, x;
        F0r(i, k){
            cin >> x;
            x--;
            q.push(x);
            a[x] = 0;
        }
        F0r(i, n-1){
            ll u, v;
            cin >> u >> v;
            u--;
            v--;
            b[u].pb(v);
            b[v].pb(u);
        }
        q.push(0);
        a[0] = 1;
        while(!q.empty()){
            ll z = q.front(); q.pop();
            FOR(it, b[z]){
                if(a[it] == -1){
                    a[it] = a[z];
                    q.push(it);
                }
            }
        }
        For(i, 1, n){
            if(a[i] == 1 and sz(b[i]) == 1){flag = 1; break;}
        }
        cout << (flag?"YES":"NO") << '\n';
    }
    return 0;
}