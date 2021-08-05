//Link to question
//"https://codeforces.com/problemset/problem/1439/A1"

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
        ll n, m;
        cin >> n >> m;
        vector<string> vs(n), gs(n);
        F0r(i, n) cin >> vs[i];
        gs = vs;
        ll k = 0;
        for(ll i=0; i<n; i+=2){
            for(ll j=0; j<m; j+=2){
                ll x1, y1, x2, y2, x3, y3, x4, y4, d1=0, d2=0, d3=0, d4=0, d = 0;
                x1 = i;y1 = j;
                x2 = i+1;y2 = j;
                x3 = i;y3 = j+1;
                x4 = i+1;y4 = j+1;
                if(x2 >= n)
                    x2 -= 2;
                if(y3 >= m)
                    y3 -= 2;
                if(x4 >= n)
                    x4 -= 2;
                if(y4 >= m)
                    y4 -= 2;
                if(vs[x1][y1] == '1'){
                    d++;
                    d1 = 1;
                }
                if(vs[x2][y2] == '1'){
                    d++;
                    d2 = 1;
                }
                if(vs[x3][y3] == '1'){
                    d++;
                    d3 = 1;
                }
                if(vs[x4][y4] == '1'){
                    d++;
                    d4 = 1;
                }
                if(d == 1)
                    k += 3;
                else if(d == 2)
                    k += 2;
                else if(d == 3)
                    k += 1;
                else if(d == 4)
                    k += 4;
                vs[x1][y1] = '0';
                vs[x2][y2] = '0';
                vs[x3][y3] = '0';
                vs[x4][y4] = '0';
            }
        }
        vs = gs;
        cout << k << '\n';
        for(ll i=0; i<n; i+=2){
            for(ll j=0; j<m; j+=2){
                ll x1, y1, x2, y2, x3, y3, x4, y4, d1=0, d2=0, d3=0, d4=0, d = 0;
                x1 = i;y1 = j;
                x2 = i+1;y2 = j;
                x3 = i;y3 = j+1;
                x4 = i+1;y4 = j+1;
                if(x2 >= n)
                    x2 -= 2;
                if(y3 >= m)
                    y3 -= 2;
                if(x4 >= n)
                    x4 -= 2;
                if(y4 >= m)
                    y4 -= 2;
                if(vs[x1][y1] == '1'){
                    d++;
                    d1 = 1;
                }
                if(vs[x2][y2] == '1'){
                    d++;
                    d2 = 1;
                }
                if(vs[x3][y3] == '1'){
                    d++;
                    d3 = 1;
                }
                if(vs[x4][y4] == '1'){
                    d++;
                    d4 = 1;
                }
                vs[x1][y1] = '0';
                vs[x2][y2] = '0';
                vs[x3][y3] = '0';
                vs[x4][y4] = '0';
                x1++;x2++;x3++;x4++;y1++;y2++;y3++;y4++;
                if(d == 1){
                    if(d2){
                        swap(x1, x2);
                        swap(y1, y2);
                    }
                    else if(d3){
                        swap(x1, x3);
                        swap(y1, y3);
                    }
                    else if(d4){
                        swap(x1, x4);
                        swap(y1, y4);
                    }
                    cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << ' '<< x3 << ' '<< y3 << '\n';
                    cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << ' '<< x4 << ' '<< y4 << '\n';
                    cout << x1 << ' ' << y1 << ' ' << x4 << ' ' << y4 << ' '<< x3 << ' '<< y3 << '\n';
                }
                else if(d == 2){
                    if(d3 and d4){
                        swap(x1, x3);
                        swap(y1, y3);
                        swap(x2, x4);
                        swap(y2, y4);
                    }
                    else if(d3 or d4){
                        if(d3){
                            if(!d1){
                                swap(x1, x3);
                                swap(y1, y3);
                            }
                            else{
                                swap(x2, x3);
                                swap(y2, y3);
                            }
                        }
                        else{
                            if(!d1){
                                swap(x1, x4);
                                swap(y1, y4);
                            }
                            else{
                                swap(x2, x4);
                                swap(y2, y4);
                            }
                        }
                    }
                    cout << x1 << ' ' << y1 << ' ' << x4 << ' ' << y4 << ' '<< x3 << ' '<< y3 << '\n';
                    cout << x4 << ' ' << y4 << ' ' << x2 << ' ' << y2 << ' '<< x3 << ' '<< y3 << '\n';
                }
                else if(d == 3){
                    if(d1)
                        cout << x1 << ' ' << y1 << ' ';
                    if(d2)
                        cout << x2 << ' ' << y2 << ' ';
                    if(d3)
                        cout << x3 << ' ' << y3 << ' ';
                    if(d4)
                        cout << x4 << ' ' << y4 << ' ';
                    cout << '\n';
                }
                else if(d == 4){
                    cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << ' '<< x3 << ' '<< y3 << '\n';
                    cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << ' '<< x4 << ' '<< y4 << '\n';
                    cout << x1 << ' ' << y1 << ' ' << x4 << ' ' << y4 << ' '<< x3 << ' '<< y3 << '\n';
                    cout << x4 << ' ' << y4 << ' ' << x2 << ' ' << y2 << ' '<< x3 << ' '<< y3 << '\n';
                }

            }
        }
    }
    return 0;
}