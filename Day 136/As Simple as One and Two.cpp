//Link to question
//"https://codeforces.com/problemset/problem/1276/A"

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
        string s;
        cin >> s;
        ll n = sz(s);
        vl a;
        F0r(i, n-2){
            string z = s.substr(i, 3);
            if(i < n-4){
                string x = s.substr(i, 5);
                if(x == "twone"){
                    a.pb(i+3);
                    i += 4;
                }
                else if(z == "two" or z == "one"){
                    a.pb(i+2);
                    i += 2;
                }
            }
            else{
                if(z == "two" or z == "one"){
                    a.pb(i+2);
                    i += 2;
                }
            }
        }
        cout << sz(a) << '\n';
        FOR(it, a) cout << it << ' ';
        cout << '\n';
    }
    return 0;
}