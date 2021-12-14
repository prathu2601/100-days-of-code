//Link to question
//"https://codeforces.com/contest/1618/problem/D"

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
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vl a(n);
        F0r(i, n) cin >> a[i];
        sort(rall(a));
        ll ans = accumulate(all(a), 0LL);
        if(a[0] == a[n-1]){
            ans -= a[0]*k*2;
            ans += k;
        }
        else{
            vl b;
            F0r(i, 2*k){
                ans -= a[i];
                b.pb(a[i]);
            }
            ll count = 1, ma = 1, j = 0;
            F0r(i, k*2-1){
                if(b[i] != b[i+1]){
                    if(count > ma)
                        j = i;
                    ma = max(ma, count);
                    count = 1;
                }
                else count++;
            }
            if(count > ma) j = n-1;
            ma = max(ma, count);
            //cout << ma << ' ';
            if(ma >= k and 2*k >= ma){
                ans += (ma - (2*k-ma))/2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}