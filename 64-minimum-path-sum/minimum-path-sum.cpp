class Solution {
public:
    int mps(vector<vector<int>>& grid,int r,int c,vector<vector<int>>& memo) {
        if(memo[r][c]!=-1) return memo[r][c];
        if(r==0&&c==0) return memo[r][c]=grid[r][c];
        if(r==0) return memo[r][c]=grid[r][c]+mps(grid,r,c-1,memo);
        if(c==0) return memo[r][c]=grid[r][c]+mps(grid,r-1,c,memo);
        return memo[r][c]=+grid[r][c]+min(mps(grid,r,c-1,memo),mps(grid,r-1,c,memo));
    }
    int minPathSum(vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
         vector<vector<int>>memo(m,vector<int>(n,-1));
         return mps(grid,m-1,n-1,memo);
    }

};



