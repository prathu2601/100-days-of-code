//Link to question
//"https://codeforces.com/contest/1559/problem/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define each(it, a) for(auto it:a)
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
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
        s += 'A';
        ll j = 0;
        while(s[j] == '?') j++;
        For(i, j, n){
            if(s[i] == '?'){
                s[i] = (s[i-1] == 'R' ? 'B' : 'R'); 
            }
        }
        F0rr(i, n){
            if(s[i] == '?'){
                s[i] = (s[i+1] == 'R' ? 'B' : 'R');
            }
        }
        cout << s.substr(0, n) << '\n';
    }
    return 0;
}