//Link to question
//"https://codeforces.com/problemset/problem/1618/E"

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
        vl a(n);
        F0r(i, n) cin >> a[i];
        ll sum = accumulate(all(a), 0LL);
        if(sum%(n*(n+1)/2)) cout << "NO\n";
        else{
            ll flag = 0, z;
            z = sum / (n*(n+1)/2);
            vl b(n);
            F0r(i, n){
                ll x = a[i] - a[(i+1)%n] + z;
                if(x%n or x <= 0){
                    flag = 1;
                    break;
                }
                b[(i+1)%n] = x/n;
            }
            if(flag) cout << "NO\n";
            else{
                cout << "YES\n";
                FOR(it, b) cout << it << ' ';
                cout << '\n';
            }
        }
    }
    return 0;
}