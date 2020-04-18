/*
Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1

Example 2:

Input:
11000
11000
00100
00011

Output: 3
*/
class Solution {
    
    //vector<int > vis;
    void dfs(vector<vector<char >>&adj, int i,int j, int l, int m){
        
        if(i<0 || j<0 || i>=l || j>=m || adj[i][j]=='0' ) return; 
        adj[i][j] = '0' ;
        
        dfs(adj,i,j+1,l,m);
        dfs(adj,i+1,j,l,m);
        dfs(adj,i-1,j,l,m);
        dfs(adj,i,j-1,l,m);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
      
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j =0; j<grid[i].size();j++){
                if(grid[i][j] =='1'){
                    dfs(grid,i,j,grid.size(), grid[i].size());
                    ans++;
                }
                //dfs()
            }
        }
        return ans;
    }
};
