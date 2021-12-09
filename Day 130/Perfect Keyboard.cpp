//Link to question
//"https://codeforces.com/problemset/problem/1303/C"

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

    ll t = 1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n = sz(s);
        string ans;
        vl a(26, 0);
        ans += s[0];
        a[s[0]-'a'] = 1;
        ll flag = 0, j = 0;
        For(i, 1, n){
            if(a[s[i]-'a']){
                if(j > 0 and ans[j-1] == s[i]) j--;
                else if(j+1 < sz(ans) and ans[j+1] == s[i]) j++;
                else {flag = 1;break;}
            }
            else{
                if(j == 0) ans = s[i] + ans;
                else if(j == sz(ans) - 1) ans += s[i], j++;
                else {flag = 1;break;}
            }
            a[s[i]-'a'] = 1;
        }
        if(flag) cout << "NO\n";
        else{
            cout << "YES\n";
            F0r(i, 26) if(!a[i]) ans += char('a'+i);
            cout << ans <<'\n';
        }
    }
    return 0;
}