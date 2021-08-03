//Link to question
//"https://codeforces.com/problemset/problem/1433/C"

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
        ll ma = *max_element(a, a+n);
        ll ans = -1;
        if(a[0] == ma and a[0] > a[1]){
            ans = 1;
        }
        if(a[n-1] == ma and a[n-1] > a[n-2]){
            ans = n;
        }
        For(i, 1, n-1){
            if((a[i] > a[i-1] or a[i] > a[i+1]) and a[i] == ma){
                ans = i+1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}