//Link to question
//"https://codeforces.com/problemset/problem/1407/A"

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
        vl a(n);
        ll x = 0, y = 0;
        F0r(i, n){
            cin >> a[i];
            if(a[i])
                x++;
            else
                y++;
        }
        if(y == 0 or x == 0){
            cout << n << '\n';
            F0r(i, n) cout << (y==0) << ' ';
            cout << '\n';
        }
        else{
            if(y >= x){
                if(y%2 and y != n/2)
                    y--;
                cout << y << '\n';
                F0r(i, y) cout << "0 ";
                cout << '\n';
            }
            else{
                if(x%2)
                    x--;
                cout << x << '\n';
                F0r(i, x) cout << "1 ";
                cout << '\n';
            }
        }
    }
    return 0;
}
