//Link to question
//"https://codeforces.com/contest/1555/problem/C"

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
        ll n;
        cin >> n;
        ll a[2][n];
        F0r(i, n) cin >> a[0][i];
        F0r(i, n) cin >> a[1][i];
        For(i, 1, n){
            a[1][i] += a[1][i-1];
        }
        Forr(i, 0, n-1){
            a[0][i] += a[0][i+1];
        }
        ll ans;
        if(n == 1){
            cout << "0\n";
            continue;
        }
        ans = min(a[0][1], a[1][n-2]);
        For(i, 1, n-1){
            ans = min(ans, max(a[0][i+1], a[1][i-1]));
        }
        cout << ans << '\n';
    }
    return 0;
}