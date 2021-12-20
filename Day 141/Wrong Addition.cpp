//Link to question
//"https://codeforces.com/contest/1619/problem/C"

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
        string s, c, b;
        cin >> s >> c;
        ll n = sz(s), m = sz(c), flag = 0, i = n-1, j = m-1;
        while(i >= 0 and j >= 0){
            if(s[i] > c[j]){
                if(j == 0 or c[j-1] != '1'){
                    flag = 1;
                    break;
                }
                else{
                    ll f = 10 + (c[j]-'0'), g = (s[i]-'0');
                    b += char(f - g+'0');
                    i--;
                    j -= 2;
                }
            }
            else{
                ll f = (c[j]-'0'), g = (s[i]-'0');
                b += char(abs(g - f) + '0');
                i--;
                j--;
            }
        }
        if(i > j) flag = 1;
        while(j >= 0){
            b += c[j];
            j--;
        }
        if(b.empty()) b += '0';
        if(sz(b) > 0) reverse(all(b));
        ll z = 0;
        while(b[z] == '0' and z <= sz(b)) z++;
        b = b.substr(z, sz(b));
        if(flag) cout << "-1\n";
        else cout << b << '\n';
    }
    return 0;
}