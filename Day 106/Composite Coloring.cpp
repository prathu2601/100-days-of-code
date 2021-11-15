//Link to question
//"https://codeforces.com/problemset/problem/1332/B"

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
    
    vl b(1001, 0);
    For(i, 1, 1001){
        if(i%2 == 0) b[i] = 2;
        else{
            for(ll j=3; j*j<=i; j+=2){
                if(i%j == 0){
                    b[i] = j;
                    break;
                }
            }
        }
        if(b[i] == 0) b[i] = i;
    }
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vl a(n), c[1001], d(n);
        F0r(i, n) cin >> a[i], c[b[a[i]]].pb(i);
        ll ma = 1;
        F0r(i, 1001){
            if(sz(c[i]) > 0){
                FOR(it, c[i]) d[it] = ma;
                ma++;
            }
        }
        cout << ma-1 << '\n';
        FOR(it, d) cout << it << ' ';
        cout << '\n';
    }
    return 0;
}