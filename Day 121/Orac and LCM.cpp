//Link to question
//"https://codeforces.com/problemset/problem/1349/A"

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
        ll n;
        cin >> n;
        vl a(n), b(n), c(n);
        F0r(i, n) cin >> a[i];
        c[n-1] = a[n-1];
        b[0] = a[0];
        For(i, 1, n){
            b[i] = __gcd(a[i], b[i-1]);
        }
        F0rr(i, n-1){
            c[i] = __gcd(c[i+1], a[i]);
        }
        ll ans = c[1];
        F0r(i, n-2){
            ans = ans * __gcd(b[i], c[i+2])/__gcd(__gcd(b[i], c[i+2]), ans);
        }
        ans = ans*b[n-2]/__gcd(ans, b[n-2]);
        cout << ans << '\n';
    }
    return 0;
}