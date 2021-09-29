//Link to question
//"https://codeforces.com/contest/1579/problem/B"

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
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<pair<ll, ll> > ans;
        F0r(i, n) cin >> a[i];
        auto b = a;
        sort(all(b));
        F0r(i, n){
            ll j = i;
            while(b[i] != a[j]) j++;
            if(i == j);
            else{
                ans.pb(mp(i, j));
                Forr(k, i, j) swap(a[k], a[k+1]);
            }
        }
        cout << ans.size() << '\n';
        FOR(it, ans) cout << it.fi+1 << ' ' << it.se+1 << ' ' << it.se-it.fi << '\n';
    }
    return 0;
}
