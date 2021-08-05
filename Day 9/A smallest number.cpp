//Link to question
//"https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/smallest-number-4-7ee4ca9a/"

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
        ll n;
        cin >> n;
        string s;
        F0r(i, n) s += '1';
        if(n <= 6){
            For(i, 1, 1000001){
                ll sum = 0, prod = 1, x = i, k = 0;
                while(x){
                    k++;
                    sum += x%10;
                    prod *= x%10;
                    x /= 10;
                }
                if(prod >= sum and k == n){
                    cout << i << '\n';
                    break;
                }
            }
        }
        else{
            For(i, 1, 1000001){
                ll sum = 0, prod = 1, x = i, k = 0;
                while(x){
                    k++;
                    sum += x%10;
                    prod *= x%10;
                    x /= 10;
                }
                if(prod >= sum + n - k){
                    cout << s.substr(0, n-k);
                    cout << i << '\n';
                    break;
                }
            }
        }

        //cout << s << '\n';
    }
    return 0;
}