//Link to question
//"https://codeforces.com/contest/1569/problem/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define fi first
#define se second
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
        string s;
        cin >> s;
        vector<ll> v;
        F0r(i, n){
            if(s[i] == '2')
                v.pb(i);
        }
        vector<vector<char> > vs(n, vector<char>(n, '='));
        F0r(i, n){
            F0r(j, n){
                if(i == j)
                    vs[i][j] = 'X';
                //cout << vs[i][j];
            }
            //cout <<'\n';
        }
        //cout << v.size() << '\n';
        if(v.size() == 1 or v.size() == 2)
            cout << "NO\n";
        else{
            cout << "YES\n";
            ll x = v.size();
            if(x > 0){
                char c = '+', d = '-';
                F0r(i, x-1){
                    ll p = v[i],  q = v[i+1];
                    vs[p][q] = c;
                    vs[q][p] = d;
                }
                ll p = v[0],  q = v[x-1];
                vs[p][q] = d;
                vs[q][p] = c;
            }
            F0r(i, n){
                F0r(j, n){
                    cout << vs[i][j];
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
