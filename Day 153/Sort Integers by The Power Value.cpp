//Link to question
//"https://leetcode.com/problems/sort-integers-by-the-power-value/"

#include<bits/stdc++.h>
class Solution {
public:
    inline int z(int x){
        if(x == 1) return 0;
        if(x%2 == 0) return z(x/2)+1;
        else return 1+z(x*3+1);
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int> > x;
        for(int i = lo; i<hi+1; i++){
            x.push_back({z(i), i});
        }
        sort(x.begin(), x.end());
        return x[k-1].second;
    }
};