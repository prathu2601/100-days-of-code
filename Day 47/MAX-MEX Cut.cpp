//Link to question
//"https://codeforces.com/contest/1566/problem/C"

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
        string s, c;
        cin >> n >> s >> c;
        ll x=0, y=0, z=0, w=0, q = 0;
        vector<bool> b(n, false);
        F0r(i, n){
            if(s[i] == '0')
                x++;
            else
                y++;
            if(c[i] == '0')
                z++;
            else
                w++;
            if(c[i] != s[i]){
                b[i] = 1;
                q++;
            }
        }
        ll p = 0;
        F0r(i, n-1){
            if(s[i] == c[i] and b[i] == 0){
                if(s[i] == '0'){
                    if(s[i+1] == '1' and c[i+1] == '1' and b[i+1] == 0){
                        p+=2;
                        b[i+1] = 1;
                    }
                    else{
                        p++;
                    }
                    b[i] = 1;
                }
                else if(s[i] == '1'){
                    if(s[i+1] == '0' and c[i+1] == '0' and b[i+1] == 0){
                        p += 2;
                        b[i+1] = 1;
                        b[i] = 1;
                    }
                }
            }
        }
        if(s[n-1] == c[n-1] and b[n-1] == 0){
            if(s[n-1] != s[n-2] and n > 1 and b[n-2] == 0 and s[n-2] == c[n-2])
                p+=2;
            else if(s[n-1] == '0')
                p++;
        }
        //cout << p << ' ' << q << ' ';
        cout << p + q*2 << '\n';
    }
    return 0;
}
