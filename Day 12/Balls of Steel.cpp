//Link to question
//"https://codeforces.com/problemset/problem/1450/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll> > a(n);
        F0r(i, n) cin >> a[i].first >> a[i].second;
        ll ans = -1;
        F0r(i, n){
            ll m = 0;
            F0r(j, n){
                m = max(m, abs(a[i].first - a[j].first) + abs(a[i].second-a[j].second));
            }
            if(m <= k){
                ans = 1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}