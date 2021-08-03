//Link to question
//"https://codeforces.com/problemset/problem/1443/B"

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
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        ll n = s.size(), k = 0, count = 0;
        F0r(i, n){
            if(s[i] == '0'){
                if(count > 0){
                    k++;
                }
                count = 0;
            }
            else
                count++;
        }
        if(count > 0)
            k++;
        ll ans = k * a, i=0;
        vector<ll> q;
        while(s[i] == '0' and i < n) i++;
        count = 0;
        while(i < n){
            if(s[i] == '1'){
                if(count > 0){
                    q.push_back(count);
                }
                count = 0;
            }
            else
                count++;
            i++;
        }
        sort(all(q));
        F0r(j, q.size()){
            ans = min(ans, ans+q[j]*b-a);
        }
        cout << ans << '\n';
    }
    return 0;
}