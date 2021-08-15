//Link to question
//"https://codeforces.com/problemset/problem/1519/D"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
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
    
    ll n;
    cin >> n;
    ll a[n], b[n], ans, sum[n+1];
    F0r(i, n) cin >> a[i];
    F0r(i, n) cin >> b[i];
    sum[0] = 0;
    For(i, 1, n+1) sum[i] = sum[i-1] + a[i-1] * b[i-1];
    ans = sum[n];
    F0r(i, n){
        ll an = a[i] * b[i];
        for(ll l = i-1, r = i+1; l >= 0 and r < n; l--, r++){
            an += a[l]*b[r] + a[r]*b[l];
            ans = max(ans, an + sum[l] + sum[n] - sum[r+1]);
        }
        an = 0;
        for(ll l = i, r = i+1; l >= 0 and r < n; l--, r++){
            an += a[l]*b[r] + a[r]*b[l];
            ans = max(ans, an + sum[l] + sum[n] - sum[r+1]);
        }
    }
    cout << ans << "\n";
    return 0;
}