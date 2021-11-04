//Link to question
//"https://codeforces.com/problemset/problem/1385/A"

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
        ll x, y, z;
        cin >> x >> y >> z;
        if(x == y and y == z){
            cout << "YES\n";
            cout << x << ' ' << x << ' ' << x <<'\n'; 
        }
        else if(x != y and y != z and x != z) cout << "NO\n";
        else if(x == y or y == z or x == z){
            if(x == y){
                if(z > x) cout << "NO\n";
                else{
                    cout << "YES\n" << x << ' ' << z << ' ' << z << '\n';
                }
            }
            else if(y == z){
                if(z < x) cout << "NO\n";
                else{
                    cout << "YES\n" << x << ' ' << x << ' ' << z << '\n';
                }
            }
            else{
                if(z < y) cout << "NO\n";
                else{
                    cout << "YES\n" << y << ' ' << y << ' ' << z << '\n';
                }
            }
        }
    }
    return 0;
}