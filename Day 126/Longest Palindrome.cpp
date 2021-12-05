//Link to question
//"https://codeforces.com/problemset/problem/1304/B"

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
    //cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<string> vs(n);
        F0r(i, n) cin >> vs[i];
        vl a(n, 0);
        vector<pl> vp;
        string ans;
        F0r(i, n){
            string c = vs[i];
            reverse(all(c));
            if(!a[i]){
                For(j, i+1, n){
                    if(c == vs[j] and !a[j]){
                        vp.pb(mp(i, j));
                        a[i] = 1;
                        a[j] = 1;
                    }
                }
            }
            if(ans.empty() and !a[i]){
                ll flag = 0;
                F0r(j, m/2) if(vs[i][j] != vs[i][m-1-j]) flag = 1;
                if(!flag) ans = vs[i];
            }
        }
        cout << (ans.empty()?0:m) + sz(vp)*2*m << '\n';
        if(!vp.empty())
        FOR(it, vp) cout << vs[it.fi];
        cout << ans;
        if(!vp.empty())
        F0rr(i, sz(vp)) cout << vs[vp[i].se];
    }
    return 0;
}