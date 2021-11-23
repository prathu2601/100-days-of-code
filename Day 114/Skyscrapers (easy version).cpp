//Link to question
//"https://codeforces.com/problemset/problem/1313/C1"

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
        ll j = 0, ma = INT_MIN;
        F0r(i, n){
            ll z = 0, mi = a[i];
            F0rr(k, i) z += (mi = min(mi, a[k]));
            mi = a[i];
            For(k, i+1, n) z += (mi = min(mi, a[k]));
            if(z+a[i] > ma) ma = z+a[i], j = i; 
        }
        ll mi = a[j];
        F0rr(i, j) a[i] = (mi = min(mi, a[i]));
        mi = a[j];
        For(i, j+1, n) a[i] = (mi = min(mi, a[i]));
        F0r(i, n) cout << a[i] << ' ';
    }
    return 0;
}