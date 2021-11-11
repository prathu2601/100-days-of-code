//Link to question
//"https://codeforces.com/problemset/problem/1296/D"

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

ll d;

bool cmp(ll x, ll y){
    ll a = x%d, b = y%d;
    if(a == 0) a = d;
    if(b == 0) b = d;
    return a < b;
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
        ll n, a, b, k;
        cin >> n >> a >> b >> k;
        vl c(n);
        F0r(i, n) cin >> c[i];
        d = a+b;
        sort(all(c), cmp);
        ll ans = 0;
        vl z;
        F0r(i, n){
            if(c[i]%d == 0)
                z.pb(d/a+(d%a>0)-1);
            else if(c[i]%d <= a) ans++;
            else{
                ll k = c[i]%d;
                z.pb(k/a+(k%a > 0)-1);
            }
        }
        if(sz(z) > 0){
            sort(all(z));
            F0r(i, sz(z)){
                if(k < z[i]) break;
                k -= z[i];
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}