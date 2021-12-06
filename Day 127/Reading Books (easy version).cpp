//Link to question
//"https://codeforces.com/problemset/problem/1374/E1"

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
        ll n, k;
        cin >> n >> k;
        vl a, b, c;
        a.pb(0);
        b.pb(0);
        c.pb(0);
        F0r(i, n){
            ll x, y, z;
            cin >> x >> y >> z;
            if(y == 1 and z == 1) a.pb(x);
            else if(y == 1) b.pb(x);
            else if(z == 1) c.pb(x);
        }
        sort(all(a));
        sort(all(b));
        sort(all(c));
        if(sz(a)+min(sz(b), sz(c)) - 2 < k) cout << "-1\n";
        else{
            F0r(i, sz(a)-1) a[i+1] += a[i];
            F0r(i, sz(b)-1) b[i+1] += b[i];
            F0r(i, sz(c)-1) c[i+1] += c[i];
            ll ans = INT_MAX;
            F0r(i, min(k+1, sz(a))){
                if(k-i < sz(b) and k-i < sz(c))
                    ans = min(ans, a[i]+b[k-i]+c[k-i]);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}