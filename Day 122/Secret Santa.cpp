//Link to question
//"https://codeforces.com/problemset/problem/1530/D"

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
        set<ll> st;
        map<ll, ll> mp;
        F0r(i, n) st.insert(i+1);
        F0r(i, n){
            cin >> a[i];
            auto it = st.find(a[i]);
            if(it != st.end()) 
                st.erase(it);
            mp[a[i]]++;
        }
        cout << sz(mp) << '\n';
        F0r(i, n){
            if(mp[a[i]] > 1){
                if(sz(st) == 1){
                    if(*st.begin() == i+1) continue;
                    a[i] = *st.begin();
                    break;
                }
                mp[a[i]]--;
                auto it = st.lower_bound(i+1);
                if(it == st.end()) it = st.begin();
                if(*it == i+1) it++;
                if(it == st.end()) it = st.begin();
                a[i] = *it;
                st.erase(it);
            }
        }
        F0r(i, n) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}