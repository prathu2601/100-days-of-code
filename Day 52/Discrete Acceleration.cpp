//Link to question
//"https://codeforces.com/problemset/problem/1408/C"

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
#define sz(a) (s).size()
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
        cout << fixed << setprecision(8);
        ll n, l;
        cin >> n >> l;
        ll a[n];
        F0r(i, n) cin >> a[i];
        long double b[n], c[n];
        F0r(i, n){
            b[i] = (a[i]-(i>0?a[i-1]:0))/((i+1)*1.0);
            b[i] += i > 0 ? b[i-1] : 0;
            //cout << b[i] << ' ';
        }
        F0rr(i, n){
            c[i] = ((i<n-1?a[i+1]:l)-a[i])/((n-i)*1.0);
            c[i] += i<n-1 ? c[i+1] : 0;
        }
        F0r(i, n){
            //cout << b[i] << ' ' << c[i] << '\n';
            if(b[i] == c[i]){
                cout << b[i] << '\n';
                break;
            }
            else if(b[i] > c[i]){
                long double x = c[i] - (i > 0 ? b[i-1] : 0);
                long double y = a[i] - (i > 0 ? a[i-1] : 0);
                y -= x*(i+1);
                cout << c[i] + y/(1.0*(n+2)) << '\n';
                break;
            }
        }
        if(b[n-1] < c[n-1]){
            long double x = b[n-1];
            long double y = l - a[n-1];
            y -= x;
            cout << x + y/(1.0*(n+2)) << '\n';
        }
        //cout << '\n';
    }
    return 0;
}
