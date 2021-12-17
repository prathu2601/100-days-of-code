//Link to question
//"https://codeforces.com/contest/1617/problem/D1"

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

ll query(ll a, ll b, ll c){
    cout << "? " << a << " " << b << " " << c << endl;
    ll x;
    cin >> x;
    return 1 - x;
}

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
        vl a(n, -1);
        ll x = -1, y = -1, pre = -1;
        F0r(i, n-2){
            ll z = query(i+1, i+2, i+3);
            if(pre != -1){
                if(z != pre){
                    x = i-1;
                    y = i+2;
                    break;
                }
            }
            pre = z;
        }
        //cout << x << ' ' << y << '\n';
        F0r(i, n){
            if(i != x and i != y){
                a[i] = query(x+1, y+1, i+1);
            }
        }
        ll i = -1, j = -1;
        F0r(k, n){
            if(a[k] == 1 and i == -1) i = k+1;
            if(a[k] == 0 and j == -1) j = k+1;
        }
        if(!query(i, j, x+1)){
            a[x] = 0;
            a[y] = 1;
        }
        else{
            a[x] = 1;
            a[y] = 0;
        }
        cout << "! " << count(all(a), 1);
        F0r(i, n){
            if(a[i] == 1) cout << " " << i+1;
        }
        cout << endl;
    }
    return 0;
}