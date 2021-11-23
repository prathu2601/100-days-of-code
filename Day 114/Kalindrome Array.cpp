//Link to question
//"https://codeforces.com/contest/1610/problem/B"

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
        F0r(i, n) cin >> a[i];
        if(n == 1 or n == 2){
            cout << "YES\n";
            continue;
        }
        F0r(i, n/2){
            if(a[i]!=a[n-i-1]){
                st.insert(a[i]);
                st.insert(a[n-i-1]);
                break;
            }
        }
        ll flag = 0;
        FOR(it, st){
            flag = 0;
            ll i = 0, j = n-1;
            while(i < j){
                if(a[i] == it) i++;
                else if(a[j] == it) j--;
                else if(a[i] != a[j]){
                    flag = 1;
                    break;
                }
                else{
                    i++;
                    j--;
                }
            }
            if(!flag) break;
        }
        cout << (!flag?"YES\n":"NO\n");
    }
    return 0;
}