//Link to question
//"https://codeforces.com/problemset/problem/1575/J"

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
    //cin >> t;
    t = 1;
    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;
        vll a(n, vl(m));
        F0r(i, n) F0r(j, m) cin >> a[i][j];
        F0r(x, k){
            ll j;
            cin >> j;
            j--;
            ll i = 0;
            while(i < n){
                if(a[i][j] == 1){
                    a[i][j] = 2;
                    j++;
                }
                else if(a[i][j] == 2)
                    i++;
                else{
                    a[i][j] = 2;
                    j--;
                }
            }
            cout << j + 1 << ' ';
        }
    }
    return 0;
}