/*
Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

Example:

Input: 

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

Output: 4
*/

class Solution {
    
   
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int ans=0;
        int n = matrix.size();
        if(n==0)
            return 0;
        int m = matrix[0].size();
       
        vector<vector<int > >dp(n+1, vector<int > (m+1,0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if( matrix[i-1][j-1]=='1'){
                    
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1],dp[i-1][j])) + 1;
                    
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        //cout<<dp[1][1];
        return ans*ans;
    }
};
