//Link to question
//"https://codeforces.com/problemset/problem/1471/B"

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
        ll n, x;
        cin >> n >> x;
        ll a[n], sum[n+1];
        memset(sum, 0, sizeof(sum));
        For(i, 1, n+1) cin >> a[i], sum[i] += sum[i-1] + a[i];
        ll q = INT_MAX, y=0;
        For(i, 1, n+1){
            ll z = 0;
            while(a[i]%x == 0){
                a[i]/=x;
                z++;
            }
            if(z < q){ 
                q = z; 
                y = i;
            }
        }
        cout << sum[y-1] + (1LL * sum[n] * (q+1)) << '\n';
    }
    return 0;
}