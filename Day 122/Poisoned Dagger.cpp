//Link to question
//"https://codeforces.com/contest/1613/problem/C"

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
    cin >> t;
    while(t--){
        ll n, h, y;
        cin >> n >> h;
        y = h;
        vl a(n);
        F0r(i, n) cin >> a[i];
        if(n == 1){
            cout << h << '\n';
            continue;
        }
        h -= n;
        vl b;
        F0r(i, n-1){
            b.pb(a[i+1]-a[i]-1);
        }
        sort(all(b));
        ll ans = -1;
        F0r(i, n-1){
            if(h-b[i]*(n-i) <= 0){
                if(h == b[i] * (n-i))
                    ans = b[i];
                else
                    ans = (h+n-i-1)/(n-i);
                break;
            }
            h -= b[i];
        }
        if(ans == -1) cout << y-(a[n-1]-a[0]) << '\n';
        else cout << ans + 1 << '\n';
    }
    return 0;
}