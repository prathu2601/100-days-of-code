//Link to question
//"https://codeforces.com/contest/1557/problem/A"

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
        ll a[n];
        F0r(i, n) cin >> a[i];
        sort(a, a+n);
        double ans = 0.0, sum = 0;
        F0r(i, n-1) sum += a[i];
        ans = a[n-1] + sum/((n-1)*1.0);
        cout <<fixed << setprecision(9) <<ans << '\n';
    }
    return 0;
}