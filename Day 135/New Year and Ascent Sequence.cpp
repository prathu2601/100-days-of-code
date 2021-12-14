//Link to question
//"https://codeforces.com/problemset/problem/1284/B"

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
        vl a, b;
        ll ans = 0, z = n;
        F0r(i, n){
            ll k, mi = INT_MAX, ma = INT_MIN, x, flag = 0;
            cin >> k;
            while(k--){
                cin >> x;
                if(x > mi) flag = 1;
                mi = min(x, mi);
                ma = max(x, ma);
            }
            if(flag){
                ans += 2*z-1;
                z--;
            }
            else{
                a.pb(mi);
                b.pb(ma);
            }
        }
        //cout << ans << ' ';
        sort(all(a));
        sort(all(b));
        F0r(i, sz(a)){
            auto it = lower_bound(all(a), b[i]);
            ans += it-a.begin();
            //cout << it-a.begin() << ' ';
        }
        cout << ans << '\n';
    }
    return 0;
}