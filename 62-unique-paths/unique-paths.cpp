class Solution {
public:
    int uniquePath(int m, int n,vector<vector<int>>&memo) {
        if(memo[m][n]!=-1) return memo[m][n];
        if(m==0||n==0) return 1;
        return memo[m][n]=uniquePath(m-1,n,memo)+uniquePath(m,n-1,memo);
    }
    int uniquePaths(int m,int n){
        vector<vector<int>>memo(m,vector<int>(n,-1));
        return uniquePath(m-1,n-1,memo);
    }
        
    
};