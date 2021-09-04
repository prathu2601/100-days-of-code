//Link to question
//"https://codeforces.com/problemset/problem/1420/C1"

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
        ll n, q;
        cin >> n >> q;
        ll a[n];
        F0r(i, n) cin >> a[i];
        if(n == 1){
            cout << a[0] << '\n';
            continue;
        }
        ll i=0;
        vector<ll> v;
        while(a[i] < a[i+1] and i+1 < n) i++;
        if(i+1 == n)
            cout << a[n-1] << '\n';
        else{
            ll ans = a[i], k = -1, l = 1, r = 0;
            For(j, i+1, n-1){
                if(a[j] <= a[j+1] and a[j] <= a[j-1]){
                    k = a[j];
                    ans -= a[j];
                    r++;
                }
                else if(a[j] >= a[j-1] and a[j] >= a[j+1]){
                    k = a[j];
                    ans += a[j];
                    l++;
                }
            }
            if(a[n-1] > a[n-2]){
                if(l == r)
                    ans += a[n-1];
                if(r < l)
                    ans += a[n-1] - k;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
