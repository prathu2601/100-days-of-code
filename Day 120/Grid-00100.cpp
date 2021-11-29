//Link to question
//"https://codeforces.com/problemset/problem/1371/D"

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

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vll a(n, vl(n, 0));
        ll i1 = 0, j1 = 0, i2 = n, j2 = 0;
        while(k > 0){
            ll e = n, p1 = i1, q1 = j1, p2 = i2, q2 = j2;
            while(e--){
                if(p1 == n or q1 == n){
                    a[p2][q2] = 1;
                    p2++;
                    q2++;
                }
                else{
                    a[p1][q1] = 1;
                    p1++;
                    q1++;
                }
                k--;
                if(k == 0) break;
            }
            j1++;
            i2--;
            if(k == 0) break;
        }
        ll ans = 0, xi = n, yi = n, xa = 0, ya = 0;
        F0r(i, n){
            ll z = 0;
            F0r(j, n){
                z += a[i][j];
            }
            xi = min(xi, z);
            xa = max(xa, z);
        }
        F0r(j, n){
            ll z = 0;
            F0r(i, n){
                z += a[i][j];
            }
            yi = min(yi, z);
            ya = max(ya, z);
        }
        ans = (xa-xi)*(xa-xi)+(ya-yi)*(ya-yi);
        cout << ans << '\n';
        F0r(i, n){ 
            F0r(j, n) cout << a[i][j];
            cout << '\n';
        }
    }
    return 0;
}