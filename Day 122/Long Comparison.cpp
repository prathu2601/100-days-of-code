//Link to question
//"https://codeforces.com/contest/1613/problem/A"

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
        string n1, m1, n2, m2;
        cin >> n1 >> m1 >> n2 >> m2;
        ll x = stoi(m1), y = stoi(m2);
        ll p = sz(n1), q = sz(n2);
        if(p+x > q+y) cout << ">\n";
        else if(p+x < q+y) cout << "<\n";
        else{
            if(p == q) cout << (n1 == n2?"=":(n1>n2?">":"<")) << '\n';
            else{
                ll z = min(p, q), b = 0;
                F0r(i, z){
                    if(n1[i] == n2[i]) continue;
                    if(n1[i] > n2[i])b = 1;
                    else if(n1[i] < n2[i]) b = 2;
                    break;
                }
                if(!b){
                    if(p < q){
                        For(i, z, q) if(n2[i] > '0') b = 2;
                    }
                    else{
                        For(i, z, p) if(n1[i] > '0') b = 1;
                    }
                }
                if(!b) cout << "=\n";
                else if(b == 1) cout << ">\n";
                else cout << "<\n";
            }
        }
    }
    return 0;
}