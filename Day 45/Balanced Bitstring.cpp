//Link to question
//"https://codeforces.com/problemset/problem/1404/A"

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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll flag = 0, a = 0, b = 0;
        F0r(i, k){
            ll c = 0;
            For(j, i, n){
                if(s[j] == '0') c|=1;
                if(s[j] == '1') c|=2;
                j += k-1;
            }
            if(c==3){
                flag = 1;
                break;
            }
            (c == 2?a:(c == 1?b:c))++;
        }
        //cout << a << ' ' << b << ' ';
        if(flag)
            cout << "NO\n";
        else{ 
            if(a <= k/2 and b <= k/2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
