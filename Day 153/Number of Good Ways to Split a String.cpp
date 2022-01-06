//Link to question
//"https://leetcode.com/problems/number-of-good-ways-to-split-a-string/"

class Solution {
public:
    int numSplits(string s) {
        int n = s.size(), ans = 0;
        vector<vector<int> > l(n, vector<int> (26, 0)), r(n, vector<int> (26, 0));
        for(int i = 0; i<n; i++){
            if(i != 0)
            for(int j = 0; j<26; j++){
                l[i][j] = l[i-1][j];
            }
            l[i][s[i]-'a']++;
        }
        for(int i = n-1; i>=0; i--){
            if(i != n-1)
            for(int j = 0; j<26; j++){
                r[i][j] = r[i+1][j];
            }
            r[i][s[i]-'a']++;
        }
        for(int i = 0; i<n-1; i++){
            int x = 0, y = 0;
            for(int j = 0; j<26; j++){
                x += (l[i][j]>0);
                y += (r[i+1][j]>0);
            }
            if(x == y)
                ans++;
        }
        return ans;
    }
};