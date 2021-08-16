//Link to question
//"https://codeforces.com/contest/1559/problem/D1"

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

ll a[2][1005];

ll any(ll x, ll y){
    if(y == a[x][y])
        return y;
    return a[x][y] = any(x, a[x][y]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll n, m1, m2;
    cin >> n >> m1 >> m2;
    For(i, 1, n+1) a[0][i] = a[1][i] = i;
    F0r(i, m1){
        ll x, y;
        cin >> x >> y;
        //if(x > y) swap(x, y);
        ll f = any(0, x), g = any(0, y);
        a[0][f] = g;
    }
    F0r(i, m2){
        ll x, y;
        cin >> x >> y;
        //if(x > y) swap(x, y);
        ll f = any(1, x), g = any(1, y);
        a[1][f] = g;
    }
    vector<pair<ll, ll> > ans;
    For(i, 1, n+1){
        For(j, i+1, n+1){
            if(any(0, i) != any(0, j) and any(1, i) != any(1, j)){
                ans.pb(mp(i, j));
                a[0][any(0, i)] = any(0, j);
                a[1][any(1, i)] = any(1, j);
            }
        }
    }
    cout << ans.size() << '\n';
    FOR(it, ans) cout << it.fi << ' ' << it.se << '\n';
    return 0;
}