//Link to question
//"https://codeforces.com/problemset/problem/1436/C"

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

    ll n, x, p;
    cin >> n >> x >> p;
    ll l = 0, r = n, ans = 1, a = x-1, b = n-x, mid;
    while(l < r){
        mid = (l+r)/2;
        if(mid <= p){
            if(mid != p){
                if(a <= 0)
                    ans = ((MOD+a)*ans)%MOD;
                else
                    ans = (ans*a)%MOD;
                a--;
            }
            l = mid + 1;
        }
        else{
            if(b <= 0)
                ans = ((MOD+b)*ans)%MOD;
            else
                ans = (ans*b)%MOD;
            b--;
            r = mid;
        }
    }
    //cout << a << ' ' << b << ' ' << ans << ' ';
    For(i, 2, a+b+1) ans = (ans*i)%MOD;
    cout << ans << '\n';
    return 0;
}