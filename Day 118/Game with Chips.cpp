//Link to question
//"https://codeforces.com/problemset/problem/1327/C"

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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<pl> a(k), b(k);
        ll x = 0, y = 0;
        F0r(i, k) cin >> b[i].fi >> b[i].se, x = max(x, b[i].fi), y = max(y, b[i].se);
        F0r(i, k) cin >> a[i].fi >> a[i].se;
        string s(x-1, 'U');
        s += string(y-1, 'L');
        F0r(i, n){
            if(i%2)
                s += string(m-1, 'L');
            else
                s += string(m-1, 'R');
            if(i!=n-1)
            s += 'D';
        }
        cout << sz(s) << '\n';
        cout << s << " ";
    }
    return 0;
}