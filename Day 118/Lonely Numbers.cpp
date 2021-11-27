//Link to question
//"https://codeforces.com/problemset/problem/1423/K"

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

    ll x = 1e6+5;
    vl a(x), b(x, 1), c;
    F0r(i, x) a[i] = i;
    for(ll i=2; i*i<=x; i++){
        if(a[i] == i){
            for(ll j=i*i; j < x; j += i){
                b[j] = 0;
                a[j] = i;
            }
        }
    }
    c = b;
    //For(i, 2, x) b[i] = 1-b[i];
    For(i, 2, x) b[i] += b[i-1];
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = b[n];
        //cout << b[n] << ' ';
        if(n >= 4) ans--;
        if(n >= 9) ans--;
        for(ll i = 5; i*i<=n; i+=6){
            if(c[i] == 1) ans--;
            if(c[i+2] == 1 and (i+2)*(i+2) <= n) ans--; 
        }
        cout << ans << '\n';
    }
    return 0;
}