//Link to question
//"https://codeforces.com/problemset/problem/1523/C"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define each(it, a) for(auto it:a)
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
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
        vector<ll> ans;
        while(n--){
            ll x;
            cin >> x;
            if(x == 1)
                ans.push_back(1);
            else{
                while(ans.back() != x - 1 and !ans.empty())
                    ans.pop_back();
                ans.pop_back();
                ans.push_back(x);
            }
            F0r(i, ans.size()){
                cout << ans[i];
                if(i == ans.size()-1)
                    cout << "\n";
                else
                    cout << '.';
            }
        }
    }
    return 0;
}