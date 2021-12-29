//Link to question
//"https://codeforces.com/contest/1623/problem/B"

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
#define con(a) {cout << a << '\n';continue;}
#define bre(a) {cout << a << '\n';break;}
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
#define YN(flag) cout << (flag?"YES":"NO") << '\n';
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

    ll t = 1;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vll a(n + 1, vl(n + 1));
        vl l(n), r(n);
        F0r(i, n){
            cin >> l[i] >> r[i];
            a[l[i]][r[i]] = 1;
        }
        F0r(i, n){
            For(d, l[i], r[i]+1){
                if ((d == l[i] or a[l[i]][d - 1]) and (d == r[i] or a[d + 1][r[i]])) {
                    cout << l[i] << ' ' << r[i] << ' ' << d << '\n';
                    break;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}