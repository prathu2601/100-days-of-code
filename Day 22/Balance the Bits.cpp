//Link to question
//"https://codeforces.com/problemset/problem/1503/A"

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
        ll count = 0;
        F0r(i, n){
            if(s[i] == '1')
                count++;
        }
        if(count%2 or s[0] == '0' or s[n-1] == '0')
            cout << "NO\n";
        else{
            string s1, s2;
            ll z = 0, flag = 0;
            F0r(i, n){
                if(s[i] == '1'){
                    if(z < count/2){
                        s1 += '(';
                        s2 += '(';
                    }
                    else{
                        s1 += ')';
                        s2 += ')';
                    }
                    z++;
                }
                else{
                    if(flag){
                        s1 += ')';
                        s2 += '(';
                    }
                    else{
                        s1 += '(';
                        s2 += ')';
                    }
                    flag = 1 - flag;
                }
            }
            cout << "YES\n" << s1 << '\n' << s2 << '\n';
        }   
    }
    return 0;
}