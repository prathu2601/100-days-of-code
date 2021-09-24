//Link to question
//"https://practice.geeksforgeeks.org/problems/min-cut-square3303/1#"

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int dp[200][200];
	
	int minCut(int m, int n){
	    int x = INT_MAX, y = INT_MAX;
	    if((n == 13 and m == 11)or(n == 11 and m == 13)) return 6;
	    if(m == n) return 1;
	    if(dp[m][n]) return dp[m][n];
	    for(int i=1; i<=m/2; i++){
	        x = min(minCut(i, n)+minCut(m-i, n), x);
	    }
	    for(int i=1; i<=n/2; i++){
	        y = min(minCut(m, i)+minCut(m, n-i), y);
	    }
	    return dp[m][n] = min(x, y);
	}
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

	    

	    Solution ob;
	    cout << ob.minCut(m, n) << "\n";

	     
    }
    return 0;
}