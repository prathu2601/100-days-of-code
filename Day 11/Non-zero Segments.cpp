//Link to question
//"https://codeforces.com/problemset/problem/1426/D"

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

    ll n;
    cin >> n;
    ll x, ans = 0, m = 0;
    set<ll> st;
    st.insert(0);
    F0r(i, n){
        cin >> x;
        m += x;
        if(st.find(m) != st.end()){
            ans++;
            st.clear();
            m = x;
            st.insert(0);
        }
        st.insert(m);
    }
    cout << ans << '\n';
    return 0;
}