//Link to question
//"https://codeforces.com/problemset/problem/1539/D"

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
    vector<pair<ll, ll> > vp(n);
    F0r(i, n) cin >> vp[i].second >> vp[i].first;
    sort(all(vp));
    //F0r(i, n) cout << vp[i].second << ' ' << vp[i].first << '\n';
    ll i=0, j=n-1, to = 0, ans = 0;
    while(i <= j){
        if(i == j){
            if(vp[i].first <= to){
                to += vp[i].second;
                ans += vp[i].second;
                i++;
            }
            else if(vp[i].first <= to + vp[i].second){
                ans += (vp[i].first - to) + vp[i].second; 
            }
            else{
                ans += (vp[j].second)*2;
            }
            break;
        }
        if(vp[i].first <= to){
            to += vp[i].second;
            ans += vp[i].second;
            i++;
        }
        else{
            if(vp[i].first <= to + vp[j].second){
                ans += vp[i].second + (vp[i].first - to)*2; 
                vp[j].second -= vp[i].first - to;
                if(vp[j].second == 0)
                    j--;
                to = vp[i].first+vp[i].second;
                i++;
            }
            else{
                ans += (vp[j].second)*2;
                to += vp[j].second;
                j--;
            }
        }
    }
    cout << ans << '\n';        
    return 0;
}