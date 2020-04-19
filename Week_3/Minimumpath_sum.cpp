/*
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Example:

Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.

*/
   
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        
           int n = grid.size();
        if(n==0) return 0;
        int l = grid[0].size();
           
           for(int i=0;i<grid.size();i++){
               for(int j=0;j<grid[i].size();j++){
                  if(i>0 && j>0){
                      grid[i][j] += min(grid[i][j-1], grid[i-1][j]);
                  }
                  if(i==0 && j>0)
                      grid[i][j] +=  grid[i][j-1];
                   if(i>0 && j==0)
                       grid[i][j] +=grid[i-1][j];
               }
           } 
      
        
    return grid[n-1][l-1];
    }
};
