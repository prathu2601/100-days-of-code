//Link to question
//"https://codeforces.com/problemset/problem/1234/C"

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
        cin >> s >> c;
        F0r(i, n){
            if(s[i] == '2' or s[i] == '1')
                s[i] = '1';
            else
                s[i] = '0';
            if(c[i] == '1' or c[i] == '2')
                c[i] = '1';
            else
                c[i] = '0';
        }
        ll flag = 0, x = 0;
        F0r(i, n){
            if(!flag){
                if(s[i] == '0'){
                    if(c[i] == '1'){
                        break;
                    }
                    else
                        flag = 1;
                }
            }
            else{
                if(c[i] == '0'){
                    if(s[i] == '1'){
                        break;
                    }
                    else
                        flag = 0;
                }
            }
            x = i+1;
        }
        if(flag and x == n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}