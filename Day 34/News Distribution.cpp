//Link to question
//"https://codeforces.com/problemset/problem/1167/C"

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

vector<ll> v[500005], ans(500005, 1);
bool b[500005], c[500005];

void dfs(ll x, ll& co){
    b[x] = 1;
    //cout << x << ' ';
    ++co;
    FOR(it, v[x]){
        if(!b[it])
            dfs(it, co);
    }
}

void df(ll x, ll co){
    c[x] = 1;
    ans[x] = co;
    FOR(it, v[x]){
        if(!c[it])
            df(it, co);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll n, m;
    cin >> n >> m;
    while(m--){
        ll k;
        cin >> k;
        ll prev = -1;
        while(k > 0){
            ll x;
            cin >> x;
            if(prev != -1){
                v[x].pb(prev);
                v[prev].pb(x);
            }
            prev = x;
            k--;
        }
    }
    For(i, 1, n+1){
        if(!b[i]){
            ll co = 0;
            dfs(i, co);
            df(i, co);
        }
    }
    For(i, 1, n+1) cout << ans[i] << ' ';
    return 0;
}
