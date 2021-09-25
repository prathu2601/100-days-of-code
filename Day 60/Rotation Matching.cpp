//Link to question
//"https://codeforces.com/problemset/problem/1365/C"

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
#define sz(a) (s).size()
#define fi first
#define se second
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
        ll n;
        cin >> n;
        ll a[n], b[n];
        map<ll, ll> v1, v2;
        F0r(i, n) cin >> a[i], v1[a[i]] = i;
        F0r(i, n) cin >> b[i];
        ll ans = 0;
        F0r(i, n){
            v2[((v1[b[i]]-i)+n)%n]++;
        }
        FOR(it, v2) ans = max(ans, it.se);
        cout << ans << '\n';
    }
    return 0;
}
