//Link to question
//"https://codeforces.com/contest/1607/problem/E"

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
        string s;
        cin >> s;
        ll r = 0, c = 0, x = 0, y = 0, p1=0, p2=0, q1=0, q2=0;
        F0r(i, sz(s)){
            if(s[i] == 'L')
                y--;
            else if(s[i] == 'R')
                y++;
            else if(s[i] == 'U')
                x++;
            else
                x--;
            p1 = max(p1, x);
            p2 = max(p2, y);
            q1 = min(q1, x);
            q2 = min(q2, y);
            if(p1-q1+1<=n and p2-q2+1<=m){
                r = p1;
                c = -q2;
            }
        }
        cout << r+1 << ' ' << c+1 << '\n';
    }
    return 0;
}