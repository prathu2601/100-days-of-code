//Link to question
//"https://codeforces.com/contest/1594/problem/C"

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
        char c;
        string s;
        cin >> n >> c >> s;
        ll i = n-1, z = 0;
        while(s[i] == c and i >= 0) i--;
        if(i == n-1){
            ll x = -1;
            F0r(i, n){
                if(s[i] == c and (i+1)*2 > n){
                    x = (i+1);
                    break;
                }
            }
            if(x == -1){
                cout << "2\n";
                cout << n << ' ' << n-1 << '\n';
            }
            else{
                cout << "1\n" << x << '\n';
            }
        }
        else if(i == -1){
            cout << "0\n";
        }
        else{
            cout << "1\n" << n << '\n';
        }
    }
    return 0;
}
