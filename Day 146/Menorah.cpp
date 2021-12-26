//Link to question
//"https://codeforces.com/contest/1615/problem/C"

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
#define con(a) {cout << a << '\n';continue;}
#define bre(a) {cout << a << '\n';break;}
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
#define YN(flag) cout << (flag?"YES":"NO") << '\n';
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

    ll t = 1;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s, c;
        cin >> s >> c;
        ll x = 0, y = 0, ans = MOD;
        F0r(i, n) x += (s[i]=='1'),y += (c[i]=='1');
        if(x == y){
            ll count = 0;
            F0r(i, n) count += s[i]!=c[i];
            ans = min(ans, count);
        }
        if(y == (n-x)+1){
            ll count = 0;
            F0r(i, n) count += s[i]==c[i];
            ans = min(ans, count);
        }
        if(ans == MOD) ans = -1;
        cout << ans << '\n';
    }
    return 0;
}