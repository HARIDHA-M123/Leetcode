class Solution {
public:
    int lps(int l,int r,string &s,vector<vector<int>> &memo) {
        if(memo[l][r]!=-1) return memo[l][r];

        if(l>r) return 0;
        if(l==r) return 1;
        if(s[l]==s[r]) return memo[l][r]=2+lps(l+1,r-1,s,memo);
        return memo[l][r]=max(lps(l,r-1,s,memo),lps(l+1,r,s,memo));
    
        
    }
    int longestPalindromeSubseq(string s){
        int m=s.size();
        vector<vector<int>> memo(m,vector<int> (m,-1));
        return lps(0,m-1,s,memo);
    }
};




// class Solution {
// public:
//     int mps(vector<vector<int>>& grid,int r,int c,vector<vector<int>>& memo) {
//         if(memo[r][c]!=-1) return memo[r][c];
//         if(r==0&&c==0) return memo[r][c]=grid[r][c];
//         if(r==0) return memo[r][c]=grid[r][c]+mps(grid,r,c-1,memo);
//         if(c==0) return memo[r][c]=grid[r][c]+mps(grid,r-1,c,memo);
//         return memo[r][c]=+grid[r][c]+min(mps(grid,r,c-1,memo),mps(grid,r-1,c,memo));
//     }
//     int minPathSum(vector<vector<int>>& grid){
//         int m=grid.size();
//         int n=grid[0].size();
//          vector<vector<int>>memo(m,vector<int>(n,-1));
//          return mps(grid,m-1,n-1,memo);
//     }

// };



