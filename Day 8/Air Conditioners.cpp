//Link to question
//"https://codeforces.com/problemset/problem/1547/E"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
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
        ll a[k], b[k];
        vector<ll> ans(n, INT_MAX), l(n, INT_MAX), r(n, INT_MAX);
        F0r(i, k) cin >> a[i];
        F0r(i, k) cin >> b[i], ans[a[i]-1] = b[i];
        r[n-1] = ans[n-1];
        l[0] = ans[0];
        F0rr(i, n-1){
            r[i] = min(ans[i], r[i+1]+1);
        }
        For(i, 1, n){
            l[i] = min(ans[i], l[i-1]+1);
        }
        F0r(i, n){
            cout << min(l[i], r[i]) << ' ';
        }
        cout << '\n';
    }
    return 0;
}