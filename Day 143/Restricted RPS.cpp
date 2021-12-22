//Link to question
//"https://codeforces.com/problemset/problem/1245/B"

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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        string s;
        cin >> s;
        ll r = count(all(s), 'R'), p = count(all(s), 'P'), l = count(all(s), 'S');
        if(min(a, l)+min(b, r)+min(c, p) >= (n+1)/2){
            cout << "YES\n";
            string ans(n, '0');
            F0r(i, n){
                if(s[i] == 'R'){
                    if(b > 0){
                        ans[i] = 'P';
                        b--;
                    }
                }
                else if(s[i] == 'P'){
                    if(c > 0){
                        ans[i] = 'S';
                        c--;
                    }
                }
                else{
                    if(a > 0){
                        ans[i] = 'R';
                        a--;
                    }
                }
            }
            F0r(i, n){
                if(ans[i] == '0'){
                    if(a-- > 0) ans[i] = 'R';
                    else if(b-- > 0) ans[i] = 'P';
                    else if(c-- > 0) ans[i] = 'S';
                }
            }
            cout << ans << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}