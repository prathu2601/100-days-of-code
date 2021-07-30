//Link to question
//"https://codeforces.com/problemset/problem/1554/B"

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
        ll a[n+1], ans = INT_MIN;
        For(i, 1, n+1) cin >> a[i];
        For(i, max(1LL, n-1000) , n+1){
            For(j, i+1, n+1){
                ans = max(ans, i*j - k*(a[i]|a[j]));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}