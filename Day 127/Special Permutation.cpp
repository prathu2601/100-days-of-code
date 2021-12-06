//Link to question
//"https://codeforces.com/problemset/problem/1352/G"

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
        if(n < 4) cout << "-1\n";
        else if(n%4 == 0 or n%4 == 1){
            ll x = n/4, z = 4;
            F0r(i, x){
                cout << z*i+2 << ' ' << z*i + 4 << ' ' << z*i + 1 << ' ' << z*i + 3 << ' ';
            }
            if(n%4) cout << n;
            cout << '\n'; 
        }
        else if(n%4 == 2){
            ll x = n/4, z = 4;
            x--;
            cout << "2 4 1 5 3 6 ";
            F0r(i, x){
                cout << 6 + z*i+2 << ' ' << 6 + z*i + 4 << ' ' << 6 + z*i + 1 << ' ' << 6 + z*i + 3 << ' ';
            }
            cout << '\n';
        }
        else{
            ll x = n/4, z = 4;
            x--;
            cout << "5 1 3 6 2 4 7 ";
            F0r(i, x){
                cout << 7 + z*i+2 << ' ' << 7 + z*i + 4 << ' ' << 7 + z*i + 1 << ' ' << 7 + z*i + 3 << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}