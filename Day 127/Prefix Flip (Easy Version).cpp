//Link to question
//"https://codeforces.com/problemset/problem/1381/A1"

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

string s, c;

ll cmp(){
    ll z = sz(s)-1;
    while(s[z] == c[z] and z >= 0) z--;
    return z;
}

void op(ll z){
    string a = s.substr(0, z);
    F0r(i, z){
        a[i] = (a[i] == '1'?'0':'1');
    }
    reverse(all(a));
    F0r(i, z){
        s[i] = a[i];
    }
}

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
        cin >> s >> c;
        if(s == c) cout << "0\n";
        else{
            vl ans;
            ll z = cmp();
            /*cout << z << '\n';
            op(1);
            cout << s << '\n';
            op(z+1);
            cout << s << '\n';*/
            while(z >= 0){
                if(z == 0){
                    ans.pb(1);
                    break;
                }
                if(s[0] != c[z]){
                    ans.pb(z+1);
                    op(z+1);
                }
                else{
                    ans.pb(1);
                    op(1);
                    ans.pb(z+1);
                    op(z+1);
                }
                z = cmp();
            }
            cout << sz(ans) << ' ';
            FOR(it, ans) cout << it << ' ';
            cout << '\n';
        }
    }
    return 0;
}