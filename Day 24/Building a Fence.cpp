//Link to question
//"https://codeforces.com/problemset/problem/1469/C"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define fi first
#define se second
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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        F0r(i, n) cin >> a[i];
        ll m = a[0], ma = a[0], flag = 0;
        For(i, 1, n){
            m = max(m-k+1, a[i]);
            ma = min(ma+k-1, a[i]+k-1);
            if(m > ma){
                flag = 1;
                break;
            }
        }
        if(a[n-1] > ma or a[n-1] < m)
            flag = 1;
        cout << (flag ? "NO\n" : "YES\n");
    }
    return 0;
}