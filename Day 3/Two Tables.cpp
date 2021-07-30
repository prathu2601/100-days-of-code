//Link to question
//"https://codeforces.com/contest/1555/problem/B"

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

double mi(double a, double b){
    if(a < b)
        return a;
    return b;
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
        ll W, H;
        cin >> W >> H;
        ll x1, x2, y1, y2, w, h;
        cin >> x1 >> y1 >> x2 >> y2 >> w >> h;
        ll x = abs(x1-x2), y = abs(y1-y2);
        if(x + w > W and y + h > H)
            cout << "-1\n";
        else{
            double ans = INT_MAX;
            if(x+w <= W){
                if(w <= x1 or x2 <= W-w)
                    ans = 0.0;
                else{
                    ans = mi(ans, mi(w-x1, x2-(W-w)));
                }
            }
            if(y+h <= H){
                if(h <= y1 or y2 <= H-h)
                    ans = 0.0;
                else{
                    ans = mi(ans, mi(h-y1, y2-(H-h)));
                }
            }
            ll u1 = abs(w-x1), u2 = abs(x2-(W-w)), o1 = abs(h-y1), o2 = abs(y2-(H-h));
            ans = mi(ans, sqrt(u1*u1+o1*o1));
            ans = mi(ans, sqrt(u1*u1+o2*o2));
            ans = mi(ans, sqrt(u2*u2+o1*o1));
            ans = mi(ans, sqrt(u2*u2+o2*o2));
            cout << fixed << setprecision(8) << ans << '\n';
        }
    }
    return 0;
}