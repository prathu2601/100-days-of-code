//Link to question
//"https://codeforces.com/contest/1598/problem/B"

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
        ll n;
        cin >> n;
        vll a(n, vl (5));
        vl b(5, 0);
        F0r(i, n){
            F0r(j, 5){
                cin >> a[i][j];
                if(a[i][j] == 1)
                    b[j]++;
            }
        }
        vl v;
        F0r(i, 5){
            if(b[i] >= n/2)
                v.pb(i);
        }
        if(sz(v) < 2){
            cout << "NO\n";
            continue;
        }
        ll flag = 0;
        F0r(k, 5){
            F0r(j, 5){
                if(k == j) continue;
                ll x = 0, y = 0, z = 0;
                F0r(i, n){
                    if(a[i][j] == 1 and a[i][k] == 1)
                        z++;
                    else if(a[i][j] == 1)
                        x++;
                    else if(a[i][k] == 1)
                        y++;
                }
                if(x > n/2 or y > n/2){
                    continue;
                }
                if(x + y + z == n){
                    flag = 1;
                    break;
                }
            }
        }
        cout << (flag?"YES":"NO") << '\n';
    }
    return 0;
}
