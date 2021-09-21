//Link to question
//"https://codeforces.com/problemset/problem/1451/B"

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
#define sz(a) (s).size()
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
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        ll i = 0, j = 0, a, b;
        a = b = n-1;
        while(i < n and s[i] != '0') i++;
        while(j < n and s[j] != '1') j++;
        while(a >= 0 and s[a] != '0') a--;
        while(b >= 0 and s[b] != '1') b--;
        while(m--){
            ll x, y, flag = 0;
            cin >> x >> y;
            x--;
            y--;
            if(s[x] == '0'){
                if(i < x) flag = 1;
            }
            else{
                if(j < x) flag = 1;
            }
            if(s[y] == '0'){
                if(a > y) flag = 1;
            }
            else{
                if(b > y) flag = 1;
            }
            cout << (flag?"YES":"NO") << '\n';
        }
    }
    return 0;
}
