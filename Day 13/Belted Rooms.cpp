//Link to question
//"https://codeforces.com/problemset/problem/1428/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
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
        bool a = false, b = false;
        F0r(i, n){
            if(s[i] == '>')
                a = true;
            if(s[i] == '<')
                b = true;
        }
        if(a and b){
            ll ans = 0;
            s += s[0];
            F0r(i, n){
                if(s[i] == '-' or s[i+1] == '-')
                    ans++;
            }
            cout << ans << '\n';
        }
        else
            cout << n << '\n';
    }
    return 0;
}