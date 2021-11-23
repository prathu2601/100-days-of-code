//Link to question
//"https://codeforces.com/problemset/problem/1311/B"

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
        ll n, m;
        cin >> n >> m;
        vl a(n), b(m), c;
        vector<pl> vp;
        F0r(i, n) cin >> a[i], vp.pb(mp(a[i], i));
        c = a;
        F0r(i, m) cin >> b[i];
        sort(all(vp));

        set<ll> st;
        F0r(i, n){
            ll k = vp[i].se, l = i;
            if(l < k) swap(l, k);
            For(j, k, l) st.insert(j+1);
        }
        sort(all(b));
        ll flag = 0, i = 0;
        FOR(it, st){
            if(it < b[i] or i == m){
                flag = 1;
                break;
            }
            else{
                while(it != b[i] and i < m) i++;
                if(i == m){
                    flag = 1;
                    break;
                }
                else
                    i++;
            }
        }
        cout << (flag?"NO":"YES") << '\n';
    }
    return 0;
}