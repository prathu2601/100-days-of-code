//Link to question
//"https://codeforces.com/contest/1618/problem/F"

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

string an(ll x){
    string s;
    while(x > 0){
        s += char(x%2+'0');
        x /= 2;
    }
    reverse(all(s));
    return s;
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
    //cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        if(x == y)con("YES");
        string s, c, z;
        s = an(x);
        c = an(y);
        z = s;
        //cout << s << ' ' << c;
        ll n = sz(s), m = sz(c), q = n;
        while(s[n-1] == '0') n--;
        ll flag = 1;
        s = s.substr(0, n);
        string p = s;
        reverse(all(p));
        F0r(i, m-n+1){
            if(c.substr(i, n) == s or c.substr(i, n) == p){
                ll x = i, y = i+n;
                while(x >= 0 and c[x] == '1') x--;
                while(y < m and c[y] == '1') y++;
                if(x == -1 and y == m){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag){
            F0r(i, m-q+1){
                string w = z;
                reverse(all(w));
                if(c.substr(i, q) == z){
                    //cout << c.substr(i, q) << ' ';
                    ll x = i, y = i+q;
                    if(y == m and x > 0) continue;
                    while(x >= 0 and c[x] == '1') x--;
                    while(y < m and c[y] == '1') y++;
                    if(x == -1 and y == m){
                        flag = 0;
                        break;
                    }
                }
                if(w == c.substr(i, q) and i > 0 and c[i-1] == '1'){
                    ll x = i-1, y = i+q;
                    while(x >= 0 and c[x] == '1') x--;
                    while(y < m and c[y] == '1') y++;
                    if(x == -1 and y == m){
                        flag = 0;
                        break;
                    }
                }
            }
        }
        YN(!flag);
    }
    return 0;
}