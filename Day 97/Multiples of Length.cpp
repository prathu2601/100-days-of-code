//Link to question
//"https://codeforces.com/problemset/problem/1396/A"

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
    
    ll t = 1;
    //cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vl a(n);
        F0r(i, n) cin >> a[i];
        if(n == 1){
            cout << "1 1\n";
            cout << -a[0] << '\n';
            cout << "1 1\n";
            cout << 0 << '\n';
            cout << "1 1\n";
            cout << 0 << '\n';
            return 0;
        }
        cout << "1 1\n";
        cout << -a[0] << '\n';
        a[0] = 0;
        cout << "1 " << n << '\n';
        F0r(i, n) cout << -n*a[i] << ' ';
        cout << '\n';
        cout << "2 " << n << '\n';
        For(i, 1, n) cout << (n-1)*a[i] << ' ';
        cout << '\n';
    }
    return 0;
}