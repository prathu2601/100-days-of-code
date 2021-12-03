//Link to question
//"https://codeforces.com/problemset/problem/1609/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define sz(a) (a).size()
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
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

    ll t = 1;
    //cin >> t;
    while(t--){
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        set<ll> st;
        F0r(i, n-2){
            if(s.substr(i, 3) == "abc"){
                st.insert(i);
                st.insert(i+1);
                st.insert(i+2);
            }
        }
        ll ans = sz(st)/3;
        while(q--){
            ll x;
            char c;
            cin >> x >> c;
            x--;
            if(s[x] == c);
            else{
                if(st.count(x)){
                    ans--;
                    ll p, l = 3;
                    if(s[x] == 'a')
                        p = x;
                    else if(s[x] == 'b')
                        p = x-1;
                    else 
                        p = x-2;
                    while(l--){
                        st.erase(p);
                        p++;
                    }
                    if(c == 'a' and x < n-2){
                        if(s[x+1] == 'b' and s[x+2] == 'c'){
                            ans++;
                            st.insert(x);
                            st.insert(x+1);
                            st.insert(x+2);
                        }
                    }
                    else if(c == 'b' and x > 0 and x < n-1){
                        if(s[x-1] == 'a' and s[x+1] == 'c'){
                            ans++;
                            st.insert(x);
                            st.insert(x-1);
                            st.insert(x+1);
                        }
                    }
                    else if(c == 'c' and x > 1){
                        if(s[x-2] == 'a' and s[x-1] == 'b'){
                            ans++;
                            st.insert(x);
                            st.insert(x-1);
                            st.insert(x-2);
                        }
                    }
                }
                else{
                    if(c == 'a' and x < n-2){
                        if(s[x+1] == 'b' and s[x+2] == 'c'){
                            ans++;
                            st.insert(x);
                            st.insert(x+1);
                            st.insert(x+2);
                        }
                    }
                    else if(c == 'b' and x > 0 and x < n-1){
                        if(s[x-1] == 'a' and s[x+1] == 'c'){
                            ans++;
                            st.insert(x);
                            st.insert(x-1);
                            st.insert(x+1);
                        }
                    }
                    else if(c == 'c' and x > 1){
                        if(s[x-2] == 'a' and s[x-1] == 'b'){
                            ans++;
                            st.insert(x);
                            st.insert(x-1);
                            st.insert(x-2);
                        }
                    }
                }
            }
            s[x] = c;
            cout << ans << '\n';
        }
    }
    return 0;
}