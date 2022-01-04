//Link to question
//"https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/"

class Solution {
public:
    int twoEggDrop(int n) {
        int ans = 0;
        while(ans*(ans+1)/2 < n){
            ans++;
        }
        return ans;
    }
};