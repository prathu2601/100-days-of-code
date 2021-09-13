//Link to question
//"https://codeforces.com/problemset/problem/1393/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define fi first
#define se second
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
        ll n;
        cin >> n;
        ll a[n];
        ll b[100005] = {};
        F0r(i, n) cin >> a[i], b[a[i]]++;

        multiset <ll> ms;
        F0r(i, 100005)
            ms.insert(b[i]);

        ll q;
        cin >> q;
        while(q--){
            char s;
            cin >> s;
            ll z;
            cin >> z;
            ms.erase(ms.find(b[z]));
            if(s == '+'){
                b[z]++;
            }
            else{
                b[z]--;
            }
            ms.insert(b[z]);
            auto it = ms.end();
            it--;
            ll x = *it;
            it--;
            ll y = *it;
            it--;
            ll q = *it;
            if(x >= 8 or (x >= 6 and y >= 2) or (x >= 4 and y >= 4) or (x >= 4 and y >= 2 and q >= 2))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
