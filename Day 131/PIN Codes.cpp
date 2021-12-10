//Link to question
//"https://codeforces.com/problemset/problem/1263/B"

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
        ll n;
        cin >> n;
        vector<string> vs(n);
        set<string> st;
        map<string, ll> mp;
        F0r(i, n) cin >> vs[i], st.insert(vs[i]), mp[vs[i]]++;
        ll ans = 0;
        FOR(it, mp){
            ans += it.se-1;
        }
        if(ans != 0){
            F0r(i, n){
                string s = vs[i];
                mp[s]--;
                if(mp[s] == 0){
                    mp[s]++;
                    st.insert(s);
                    continue;
                }
                else{
                    string z = s;
                    F0r(i, 10){
                        F0r(j, 4){
                            z[j] = (z[j] != i+'0'?i+'0':z[j]);
                            if(st.count(z) == 0) break;
                            else z = s;
                        }
                        if(st.count(z) == 0) break;
                    }
                    st.insert(z);
                    vs[i] = z;
                }
            }
        }
        cout << ans << '\n';
        F0r(i, n) cout << vs[i] << '\n';
    }
    return 0;
}