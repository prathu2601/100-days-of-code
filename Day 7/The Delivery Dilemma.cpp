//Link to question
//"https://codeforces.com/problemset/problem/1443/C"

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
        ll n;
        cin >> n;
        ll a[n], b[n];
        vector<pair<ll, ll> > vp;
        F0r(i, n) cin >> a[i];
        F0r(i, n) cin >> b[i], vp.push_back({a[i], b[i]});
        sort(all(vp));
        ll ans = vp[n-1].first, sum = 0;
        Forr(i, 1, n){
            ans = min(ans, max(sum+(vp[i].second),vp[i-1].first));
            sum += vp[i].second;
        }
        cout << min(ans, sum+vp[0].second) << '\n';
    }
    return 0;
}