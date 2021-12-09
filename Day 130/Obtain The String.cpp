//Link to question
//"https://codeforces.com/problemset/problem/1295/C"

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
        string s, c;
        cin >> s >> c;
        ll n = sz(s), m = sz(c);
        set<char> st;
        map<ll, set<ll> > ms;
        F0r(i, n) st.insert(s[i]), ms[s[i]-'a'].insert(i);
        ll flag = 0;
        F0r(i, m) if(st.count(c[i]) == 0) {flag = 1; break;}
        if(flag) cout << "-1\n";
        else{
            ll i = -1, j = 0, ans = 1;
            while(j < m){
                auto it = ms[c[j]-'a'].upper_bound(i);
                if(it == ms[c[j]-'a'].end()){
                    ans++;
                    it = ms[c[j]-'a'].begin();
                }
                i = *it;
                j++;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}