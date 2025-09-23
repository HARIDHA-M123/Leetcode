class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid,int r,int c,vector<vector<int>>&memo) {
        if (memo[r][c]!=-1) return memo[r][c]; 
        if (obstacleGrid[r][c] == 1) return memo[r][c]=0;
        
        if(r==0&&c==0) return memo[r][c]=1;
        if(r==0) return uniquePathsWithObstacles(obstacleGrid,r,c-1,memo);
        if(c==0) return uniquePathsWithObstacles(obstacleGrid,r-1,c,memo);
        
        return memo[r][c]=uniquePathsWithObstacles(obstacleGrid,r,c-1,memo)+uniquePathsWithObstacles(obstacleGrid,r-1,c,memo);

        
        
    }
    int  uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
         vector<vector<int>>memo(m,vector<int>(n,-1));
         return uniquePathsWithObstacles(obstacleGrid,m-1,n-1,memo);
    }


};


// class Solution {
// public:
//     int uniquePath(int m, int n,vector<vector<int>>&memo) {
//         if(memo[m][n]!=-1) return memo[m][n];
//         if(m==0||n==0) return 1;
//         return memo[m][n]=uniquePath(m-1,n,memo)+uniquePath(m,n-1,memo);
//     }
//     int uniquePaths(int m,int n){
//         vector<vector<int>>memo(m,vector<int>(n,-1));
//         return uniquePath(m-1,n-1,memo);
//     }
        
    
// };