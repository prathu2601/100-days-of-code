//Link to question
//"https://codeforces.com/problemset/problem/1534/C"

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

const ll M = 4e5 + 5;

bool b[M];
vector<ll> v[M];

void dfs(ll x){
    b[x] = true;
    for(auto it:v[x]) if(!b[it]) dfs(it);
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
        ll a[2][n];
        F0r(i, n) cin >> a[0][i], v[i+1].clear(), b[i+1] = false;
        F0r(i, n) cin >> a[1][i], v[a[0][i]].push_back(a[1][i]), v[a[1][i]].push_back(a[0][i]);
        ll ans = 1LL;
        For(i, 1, n+1){
            if(!b[i]){
                ans = (ans*2)%MOD;
                dfs(i);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}