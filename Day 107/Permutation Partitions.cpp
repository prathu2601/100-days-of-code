//Link to question
//"https://codeforces.com/problemset/problem/1326/C"

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
        ll n, k;
        cin >> n >> k;
        vl a(n);
        F0r(i, n) cin >> a[i];
        ll i = 0, ans = 0;
        while(i<k){
            ans = (ans+n-i);
            i++;
        }
        ll ans2 = 1, j = 0, count = 1;
        while(a[j] <= n-k) j++;
        For(i, j+1, n){
            if(a[i] > n-k){
                ans2 = (ans2*count)%DOM;
                count = 1;
            }
            else
                count++;
        }
        cout << ans << ' ' << ans2 << '\n';
    }
    return 0;
}