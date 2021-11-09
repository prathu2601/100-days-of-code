//Link to question
//"https://codeforces.com/contest/1326/problem/D1"

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
        string s;
        cin >> s;
        ll n = sz(s), i = 0, j = n-1;
        while(s[i] == s[j] and i < j){
            i++;
            j--;
        }
        if(i >= j){
            cout << s << '\n';
            continue;
        }
        cout << s.substr(0, i);
        ll ma = 1, le = i, l, r;
        For(k, i, j+1){
            l = r = k;
            while(r < j and s[r] == s[r+1])r++;
            k = r;
            while(l > i and r < j and s[l-1] == s[r+1]) l--, r++;
            if(r - l + 1 > ma and (l == i or r == j)){
                ma = r-l+1;
                le = l;
            }
        }
        cout << s.substr(le, ma);
        cout << s.substr(j+1, n-j) << '\n';
    }
    return 0;
}