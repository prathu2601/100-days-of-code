//Link to question
//"https://codeforces.com/problemset/problem/1406/B"

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
#define fi first
#define se second
#define MOD 1000000007
#define DOM 998244353

bool cmp(ll a, ll b){
    return abs(a)>abs(b);
}

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
        ll n;
        cin >> n;
        ll a[n];
        vector<ll> x, y, z;
        F0r(i, n) cin >> a[i];
        sort(a, a+n, cmp);
        ll ma = *max_element(a, a+n);
        if(ma < 0){
            cout << a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5] << '\n';
        }
        else{
            ll ans = a[0]*a[1]*a[2]*a[3]*a[4];
            For(i, 5, n){
                F0r(j, 5){
                    ll m = a[i];
                    F0r(k, 5){
                        if(j!=k) m *= a[k];
                    }
                    ans = max(ans, m);
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
