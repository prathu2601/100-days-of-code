//Link to question
//"https://codeforces.com/problemset/problem/1421/B"

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
        vector<string> vs(n);
        F0r(i, n) cin >> vs[i];
        string s;
        s += vs[0][1];
        s += vs[1][0];
        s += vs[n-2][n-1];
        s += vs[n-1][n-2];
        //cout << s << ' ';
        if(s[0] == s[1] and s[2] == s[3]){
            if(s[0] == s[3])
                cout << "2\n" << "1 2\n2 1\n"; 
            else
                cout << "0\n";
        }
        else{
            ll x = count(all(s), '0');
            if(x == 1){
                cout << "1\n";
                if(s[0] == '0')
                    cout << "2 1";
                else if(s[1] == '0')
                    cout << "1 2";
                else if(s[2] == '0')
                    cout << n << ' ' << n-1;
                else
                    cout << n-1 << ' ' << n;
                cout << '\n';
            }
            else if(x == 2){
                cout << "2\n";
                if(s[0] == '0')
                    cout << "2 1";
                if(s[1] == '0')
                    cout << "1 2";
                cout << '\n';
                if(s[2] == '1')
                    cout << n << ' ' << n-1;
                if(s[3] == '1')
                    cout << n-1 << ' ' << n;
                cout << '\n';
            }
            else{
                cout << "1\n";
                if(s[0] == '1')
                    cout << "2 1";
                else if(s[1] == '1')
                    cout << "1 2";
                else if(s[2] == '1')
                    cout << n << ' ' << n-1;
                else
                    cout << n-1 << ' ' << n;
                cout << '\n';
            }
        }
    }
    return 0;
}
