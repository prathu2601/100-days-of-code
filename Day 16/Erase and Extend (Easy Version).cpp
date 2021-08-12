//Link to question
//"https://codeforces.com/problemset/problem/1537/E1"

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

    ll n, k;
    cin >> n >> k;
    string s, ans;
    cin >> s;
    ans += s[0];
    ll cu = 0;
    For(i, 1, n){
        if(s[cu] < s[i])
            break;
        ans += s[i];
        if(s[cu] == s[i])
            cu++;
        else
            cu = 0;
    }
    while(cu != 0){
        ans.pop_back();
        cu--;
    }
    F0r(i, k) cout << ans[i%ans.size()];
    cout << '\n';
    return 0;
}