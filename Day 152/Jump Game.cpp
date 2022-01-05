//Link to question
//"https://leetcode.com/problems/jump-game/"

class Solution {
public:
    bool canJump(vector<int>& a) {
        int n = a.size();
        if(n == 1) return 1;
        for(int i = 0; i<n; i++){
            int x = i+a[i], y = i+a[i];
            if(y >= n-1) break;
            for(int j = i+1; j<=i+a[i]; j++){
                if(a[j]+j >= y){
                    y = a[j]+j;
                    x = j;
                }
            }
            if(i == x) return 0;
            i = x-1;
            if(y >= n-1) break;
        }
        return 1;
    }
};