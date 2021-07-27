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
        string s, q, f;
        cin >> s >> q;
        f = q;
        reverse(all(f));
        ll n = s.size(), m = q.size(), flag = 0;
        F0r(i, n){
            if(s[i] == q[0]){
                ll x = i, y = 0;
                while(s[x] == q[y] and x < n and y < m){
                    x++;
                    y++;
                    if(m-y <= x+1){
                        ll g = x, h = y;
                        while(s[g] == q[h] and g >= 0 and h < m){
                            g--;
                            h++;
                        }
                        if(h == m and x >= -1){
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
        F0r(i, n){
            if(s[i] == f[0]){
                ll x = i, y = 0;
                while(s[x] == f[y] and x < n and y < m){
                    x++;
                    y++;
                    if(m-y <= x+1){
                        ll g = x, h = y;
                        while(s[g] == f[h] and g >= 0 and h < m){
                            g--;
                            h++;
                        }
                        if(h == m and x >= -1){
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}