//Link to question
//"https://codeforces.com/problemset/problem/1323/B"

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
        vl a(n), b(m), c(n+1), d(m+1);
        F0r(i, n) cin >> a[i];
        F0r(j, m) cin >> b[j];
        ll count = 0;
        F0r(i, n){
            if(!a[i]){
                if(count > 0){
                    For(j, 1, count+1) c[j]+=count-j+1;
                }
                count = 0;
            }
            else
                count++;
        }
        if(count > 0)
            For(j, 1, count+1) c[j]+=count-j+1;
        count = 0;
        F0r(i, m){
            if(!b[i]){
                if(count > 0)
                    For(j, 1, count+1) d[j]+=count-j+1;
                count = 0;
            }
            else
                count++;
        }
        if(count > 0)
            For(j, 1, count+1) d[j]+=count-j+1;
        ll ans = 0;
        For(i, 1, n+1)
            if(k%i == 0 and k/i <= m)
                ans += c[i]*d[k/i];
        cout << ans << '\n';
    }
    return 0;
}