#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
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
        string s, t;
        cin >> s;
        t = s;
        ll x = 5, y = 5;
        ll s1=0, s2=0, ans = 10;
        F0r(i, 10){
            if(i%2==0){
                if(s[i] == '1' or s[i] == '?'){
                    s1++;
                }
                x--;
            }
            else{
                if(s[i]== '1'){
                    s2++;
                }
                y--;
            }
            if(s1 > s2+y){
                //cout << s2 << ' ' << s1 <<' '  ;
                ans = min(ans, i+1);
                break;
            }
        }
        x = 5;
        y = 5;
        s1 = 0;
        s2 = 0;
        F0r(i, 10){
            if(i%2==0){
                if(s[i] == '1'){
                    s1++;
                }
                x--;
            }
            else{
                if(s[i]== '1' or s[i] == '?'){
                    s2++;
                }
                y--;
            }
            if(s1+x < s2){
                //cout << s2 << ' ' << s1 <<' '  ;
                ans = min(ans, i+1);
                break;  
            }
        }
        cout << ans << '\n';
    }
    return 0;
}