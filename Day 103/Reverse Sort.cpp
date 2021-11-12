//Link to question
//"https://codeforces.com/contest/1605/problem/B"

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
        string s, c;
        cin >> s;
        c = s;
        ll flag = 0;
        F0r(i, n-1){
            if(s[i] > s[i+1])
                flag = 1;
        }
        if(!flag){
            cout << "0\n";
            continue;
        }
        ll j = n-1;
        while(s[j]=='1' and j >= 0)j--;
        vl a, b;
        F0r(i, n){
            if(i >= j)
                break;
            while(s[i] == '1') a.pb(i+1), i++;
        }
        ll k = sz(a), l = 0;
        while(k > l){
            if(s[j] == '1')
                a.pop_back();
            else 
                b.pb(j+1);
            l++;
            j--;
        }
        reverse(all(b));
        cout << 1 << '\n' << sz(a)+sz(b) << ' ';
        FOR(it, a) cout << it << ' ';
        FOR(it, b) cout << it << ' ';
        cout << '\n';
    }
    return 0;
}