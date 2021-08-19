//Link to question
//"https://codeforces.com/problemset/problem/1484/C"

#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
		vector<ll> v[m];
		ll a[n+1], k[m], ans[m], b[n+1];
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(ans, -1, sizeof(ans));
		for(ll i=0; i<m; i++){
			cin >> k[i];
			for(ll j=0; j<k[i]; j++){
				ll x;
				cin >> x;
				if(k[i] == 1){
					ans[i] = x;
					a[x]++;
					b[x]--;
				}
				v[i].push_back(x);
				b[x]++;
			}
		}
		if(*max_element(a, a+n+1) > (m+1)/2){
			cout << "NO\n";
			continue;
		}
		ll g;
		for(ll i=0; i<m; i++){
			if(ans[i] == -1){
				ll h = INT_MAX;
				g = 0;
				for(auto it:v[i]){
					if(a[it] < (m+1)/2){
						if(b[it] > 0 and a[it] < h){
							h = a[it];
							g = it;
						}
					}
				}
				if(g == 0)
					break;
				ans[i] = g;
				a[g]++;
				for(auto it:v[i]){
						b[it]--;
				}
			}
		}
		if(!g){
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		for(ll i=0; i<m; i++)
			cout << ans[i] << ' ';
		cout << '\n';
	}
    return 0;
}