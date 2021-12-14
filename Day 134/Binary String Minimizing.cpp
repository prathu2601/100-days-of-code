//Link to question
//"https://codeforces.com/problemset/problem/1256/D"

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
#define con(a) {cout << a << '\n';continue;}
#define bre(a) {cout << a << '\n';break;}
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

    ll t = 1;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        set<ll> a, b;
        F0r(i, n) (s[i]=='0'?a:b).insert(i);
        if(a.empty() or b.empty()) con(s);
        auto it = a.begin(), ir = b.begin();
        while(it != a.end() and ir != b.end()){
            if(*it < *ir) it++;
            else{
                if(*it-*ir <= k){
                    k-=(*it-*ir);
                    s[*it] = '1';
                    s[*ir] = '0';
                    b.insert(*it);
                    ir++;
                    it++;
                }
                else{
                    For(i, *it-k, *it+1){
                        if(s[i] == '1'){
                            s[i] = '0';
                            s[*it] = '1';
                            break;
                        }
                    }
                    break;
                }
            }
        }
        cout << s << '\n';
    }
    return 0;
}