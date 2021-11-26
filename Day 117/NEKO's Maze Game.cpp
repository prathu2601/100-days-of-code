//Link to question
//"https://codeforces.com/problemset/problem/1292/A"

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
        ll n, q;
        cin >> n >> q;
        vll a(2, vl(n, 0));
        ll flag = 0;
        F0r(i, q){
            ll r, c;
            cin >> r >> c;
            r--;c--;
            ll x = 0;
            (a[r][c]==0?x++:x--);
            a[r][c] = 1 - a[r][c];
            if(a[1-r][c] == 1) flag += x;
            if(c+1 < n and a[1-r][c+1] == 1) flag += x;
            if(c-1 > -1 and a[1-r][c-1] == 1) flag += x;
            cout << (flag==0?"YES\n":"NO\n");
        }
    }
    return 0;
}