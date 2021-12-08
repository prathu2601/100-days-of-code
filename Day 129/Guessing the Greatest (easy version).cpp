//Link to question
//"https://codeforces.com/problemset/problem/1486/C1"

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

ll query(ll x, ll y){
    if(x >= y) return -1;
    cout << "? " << x+1 << ' ' << y+1 << endl;
    ll z;
    cin >> z;
    return z-1;
}

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
        ll l = 0, r = n;
        while(l < r - 1){
            ll m = (l+r)/2, ma;
            ma = query(l, r-1);
            if(ma < m){
                if(query(l, m-1) == ma) r = m;
                else l = m;
            }
            else{
                if(query(m, r-1) == ma) l = m;
                else r = m;
            }
        }
        cout << "! " << r << endl;
    }
    return 0;
}