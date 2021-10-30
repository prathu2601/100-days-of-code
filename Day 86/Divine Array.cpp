//Link to question
//"https://codeforces.com/contest/1602/problem/B"

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
        ll n;
        cin >> n;
        vl a(n);
        map<ll, ll> m;
        F0r(i, n) cin >> a[i], m[a[i]]++;
        map<ll, vl > mp;
        mp[0] = a;
        ll z = 1;
        while(1){
            vl f(n);
            F0r(i, n){
                f[i] = m[a[i]];
            }
            map<ll, ll> k;
            FOR(it, m){
                k[it.se] += it.se;
            }
            if(f == a)
                break;
            a = f;
            m = k;
            mp[z] = a;
            z++;
        }
        ll q;
        cin >> q;
        while(q--){
            ll x, y;
            cin >> x >> y;
            x--;
            if(y >= sz(mp))
                y = z-1;
            cout << mp[y][x] << '\n';
        }
    }
    return 0;
}