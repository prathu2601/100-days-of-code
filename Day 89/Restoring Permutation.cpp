//Link to question
//"https://codeforces.com/problemset/problem/1315/C"

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
        ll flag = 0;
        set<ll> x, y;
        F0r(i, n){
            cin >> a[i];
            if(a[i] == 1)
                flag++;
            if(a[i] == 2*n)
                flag--;
            x.insert(a[i]);
        }
        if(flag < 1)
            cout << "-1\n";
        else{
            ll z = 0;
            For(i, 1, 2*n+1){
                if(x.find(i) == x.end()){
                    z--;
                    y.insert(i);
                }
                else
                    z++;
                if(z < 0)
                    break;
            }
            if(z < 0){
                cout << "-1\n";
                continue;
            }
            F0r(i, n){
                cout << a[i] << ' ' << *y.lower_bound(a[i]) << ' ';
                y.erase(y.lower_bound(a[i]));
            }
            cout << '\n';
        }
    }
    return 0;
}