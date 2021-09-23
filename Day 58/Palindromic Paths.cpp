//Link to question
//"https://codeforces.com/problemset/problem/1366/C"

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
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll a[n][m], b[n+m-1][2], ans = 0;
        memset(b, 0, sizeof(b));
        F0r(i, n){
            F0r(j, m){
                cin >> a[i][j];
                b[i+j][a[i][j]]++;
            }
        }
        F0r(i, n+m-1){
            ll j = n+m-2-i;
            if(i >= j) break;
            ans += min(b[i][0]+b[j][0], b[i][1]+b[j][1]);
        }
        cout << ans << '\n';
    }
    return 0;
}
