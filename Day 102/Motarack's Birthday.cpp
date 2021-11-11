//Link to question
//"https://codeforces.com/problemset/problem/1301/B"

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
        ll mi = INT_MAX, ma = INT_MIN;
        F0r(i, n) cin >> a[i];
        For(i, 1, n-1){
            if(a[i] != -1 and (a[i-1] == -1 or a[i+1] == -1)) mi = min(mi, a[i]), ma = max(ma, a[i]);
        }
        if(a[0] != -1 and a[1] == -1) mi = min(mi, a[0]), ma = max(ma, a[0]);
        if(a[n-1] != -1 and a[n-2] == -1) mi = min(mi, a[n-1]), ma = max(ma, a[n-1]);
        ll m = 0, k = (mi+ma)/2;
        F0r(i, n){
            if(a[i] == -1) a[i] = k;
        }
        F0r(i, n-1){
            m = max(m, abs(a[i+1]-a[i]));    
        }
        cout << m << ' ' << k << '\n';
    }
    return 0;
}