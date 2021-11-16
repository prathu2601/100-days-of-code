//Link to question
//"https://codeforces.com/problemset/problem/1330/B"

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
        vl a(n), b(n, 0);
        F0r(i, n) cin >> a[i], b[a[i]]++;
        ll flag = 0, mi = 10;
        For(i, 1, n){
            if(b[i] > mi){
                flag = 1;
                break;
            }
            else mi = min(b[i], mi);
            if(b[i] > 2){
                flag = 1;
                break;
            }
        }
        if(flag) cout << "0\n";
        else{
            ll ma = *max_element(all(a));
            vl c(n, 0), d(n, 0);
            set<ll> st, ss, k;
            F0r(i, n){
                if(c[a[i]] > 0 or b[a[i]] == 1) break;
                st.insert(a[i]);
                auto it = st.end();
                it--;
                if(*it == sz(st) and (*it == ma or n-*it == ma)) k.insert(sz(st));
                c[a[i]]++;
            }
            F0rr(i, n){
                if(d[a[i]] > 0 or b[a[i]] == 1) break;
                ss.insert(a[i]);
                auto it = ss.end();
                it--;
                if(*it == sz(ss) and (*it == ma or n-*it == ma)) k.insert(n-sz(ss));
                d[a[i]]++;
            }
            cout << sz(k) << '\n';
            FOR(it, k) cout << it << ' ' << n - it << '\n';
        }
    }
    return 0;
}