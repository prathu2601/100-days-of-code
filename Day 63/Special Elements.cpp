//Link to question
//"https://codeforces.com/problemset/problem/1352/E"

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
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n+1, 0), c(n+1, 0);
        F0r(i, n) cin >> a[i], b[i+1] = b[i]+a[i];
        F0r(i, n){
            For(j, i+2, n+1){
                if(b[j]-b[i] > n)
                    break;
                c[b[j]-b[i]] = 1;
            }
        }
        int ans = 0;
        F0r(i, n) ans += c[a[i]];
        cout << ans << '\n';
    }
    return 0;
}
