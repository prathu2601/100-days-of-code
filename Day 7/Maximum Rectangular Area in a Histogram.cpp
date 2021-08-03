//Link to question
//"https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1/?category[]=Stack&category[]=Stack&problemStatus=solved&page=1&query=category[]StackproblemStatussolvedpage1category[]Stack"

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long a[], int n){
        stack<long long> st;
        long long ans = 0, i = 0, x = 0;
        while(i < n){
            if(st.empty() or a[st.top()] < a[i]){
                st.push(i);
                i++;
            }
            else{
                long long z = st.top();st.pop();
                if(st.empty())
                    x = a[z] * i;
                else
                    x = a[z] * (i - st.top() - 1);
            }
            ans = max(x, ans);
        }
        while(!st.empty()){
            long long z = st.top();st.pop();
            if(st.empty())
                x = a[z] * i;
            else
                x = a[z] * (i - st.top() - 1);
            ans = max(x, ans);
        }
        return ans;
    }
};

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}