//Link to question
//"https://leetcode.com/problems/count-number-of-teams/"

#include<bits/stdc++.h>

class Solution {
public:
    int any(vector<int> a){
        int n = a.size(), x = 0;
        int an[n], bn[n];
        for(int i = 0; i<n; i++) an[i] = bn[i] = 0;
        for(int i = 0; i<n; i++){
            int y = 0;
           for(int j = 0; j < i; j++){
               y += (a[i] > a[j]);
           }
           an[i] = y; 
        }
        for(int i = n-1; i >= 0; i--){
            int y = 0;
            for(int j = n-1; j > i; j--){
                y += (a[j] > a[i]);
            }
            bn[i] = y;
        }
        for(int i = 0; i<n; i++){
            x += an[i]*bn[i];
        }   
        return x;
    }
    int numTeams(vector<int>& a) {
        int ans = 0, n = a.size();
        ans += any(a);
        reverse(a.begin(), a.end());
        ans += any(a);
        return ans;
    }
};