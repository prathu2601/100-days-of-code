//Link to question
//"https://codeforces.com/problemset/problem/1530/B"

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
        ll n, m;
        cin >> n >> m;
        vector<string> vs(n);
        F0r(i, n){
            F0r(j, m){
                vs[i].pb('0');
            }
        }
        ll i = 0, j = 0, k = 0;
        while(i < n){
            if(k%2 == 0){
                vs[i][j] = '1';
                if(m%2)
                    vs[i][m-1] = '1';
                else if(m%2 == 0 and i < n-2)
                    vs[i+2][m-1] = '1';
            }
            i++;
            k++;
        }
        i=0; j=0; k=0;
        while(j < m){
            if(k%2 == 0){
                vs[i][j] = '1';
                if(n%2)
                    vs[n-1][j] = '1';
                else if(n%2 == 0 and j < m-2)
                    vs[n-1][j+2] = '1';
            }
            j++;
            k++;
        }
        if((n%2 and m%2 == 0) or (n%2 == 0 and m%2))
            vs[n-1][m-1] = '0';
        if(n%2 == 0 and m%2 == 0)
            vs[n-2][m-1] = '0';
        F0r(i, n){
            F0r(j, m){
                cout << vs[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}