//Link to question
//"https://codeforces.com/problemset/problem/1375/B"

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
#define sz(a) (s).size()
#define fi first
#define se second
#define MOD 1000000007
#define DOM 998244353

bool any(string s){
    ll n = sz(s);
    string c = "abacaba";
    ll count = 0;
    F0r(i, n-6){
        ll flag = 0;
        For(j, i, i+7){
            if(s[j] != '?' and s[j] != c[j-i]){
                flag = 1;
                break;
            }
        }
        if(!flag)
            count++;
    }
    return (count == 1 ? true : false);
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
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        F0r(i, n) F0r(j, m) cin >> a[i][j];
        ll flag = 0;
        F0r(i, n){
            F0r(j, m){
                if(i == 0 or i == n-1){
                    if(j == 0 or j == m-1){
                        if(a[i][j] > 2){
                            flag = 1;
                            break;
                        }
                    }
                    else{
                        if(a[i][j] > 3){
                            flag = 1;
                            break;
                        }
                    }
                }
                else if(j == 0 or j == m-1){
                    if(a[i][j] > 3){
                        flag = 1;
                        break;
                    }
                }
                else{
                    if(a[i][j] > 4){
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout << "NO\n";
        else{
            cout << "YES\n";
            F0r(i, n){
                F0r(j, m){
                    if(i == 0 or i == n-1){
                        if(j == 0 or j == m-1){
                            cout << "2 ";
                        }
                        else{
                            cout << "3 ";
                        }
                    }
                    else if(j == 0 or j == m-1){
                        cout << "3 ";
                    }
                    else{
                        cout << "4 ";
                    }
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
