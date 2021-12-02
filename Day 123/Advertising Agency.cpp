//Link to question
//"https://codeforces.com/problemset/problem/1475/E"

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

ll power(ll x, ll y, ll p){
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

ll fact(ll x){
    ll z = 1;
    For(i, 2, x+1) z = (z*i)%MOD;
    return z;
}

ll ncr(ll x, ll y){
    return fact(x)*power(fact(x-y), MOD-2, MOD)%MOD*power(fact(y), MOD-2, MOD)%MOD;
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
        ll n, k;
        cin >> n >> k;
        vl a(n);
        F0r(i, n) cin >> a[i];
        sort(rall(a));
        ll x = a[k-1], y = 0, z = 0;
        F0r(i, k) if(a[i] == x) y++;
        For(i, k, n) if(a[i] == x) z++;
        z += y;
        y = min(y, z-y);
        cout << ncr(z, y) << '\n';
    }
    return 0;
}