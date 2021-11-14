//Link to question
//"https://codeforces.com/contest/1589/problem/B"

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
        ll x, y;
        cin >> x >> y;
        ll ans = INT_MAX;
        if(x%3 == 0) ans = min(ans, x/3*y);
        if(y%3 == 0) ans = min(ans, y/3*x);
        if(x%3 == 1) ans = min(ans, x/3*y + (y+2)/3);
        if(x%3 == 2) ans = min(ans, x/3*y + 2*((y+2)/3));
        if(y%3 == 1) ans = min(ans, y/3*x + (x+2)/3);
        if(y%3 == 2) ans = min(ans, y/3*x + 2*((x+2)/3));
        cout << ans << '\n';
    }
    return 0;
}