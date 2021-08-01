//Link to question
//"https://codeforces.com/problemset/problem/1478/B"

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
        ll n, d;
        cin >> n >> d;
        F0r(i, n){
            ll flag = 0, x, c;
            cin >> x;
            if(x < d){
                cout << "NO\n";
                continue;
            }
            c = x;
            while(c > 0){
                if(c%10 == d){
                    flag = 1;
                    break;
                }
                c /= 10;
            }
            c = x;
            while(c > 0){
                c -= d;
                x -= d;
                while(c > 0){
                    if(c%10 == d){
                        flag = 1;
                        break;
                    }
                    c /= 10;
                }
                if(flag)
                    break;
                c = x;
            }
            if(flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}