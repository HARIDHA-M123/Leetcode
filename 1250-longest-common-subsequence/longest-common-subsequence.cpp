class Solution {
public:
    int lcs(string &s, string &t,int i,int j,vector<vector<int>>& memo) {
        
        if(i<0||j<0) return 0;
        if(memo[i][j]!=-1) return memo[i][j];
        if(s[i]==t[j]) return memo[i][j]=1+lcs(s,t,i-1,j-1,memo);
        return memo[i][j]=max(lcs(s,t,i,j-1,memo),lcs(s,t,i-1,j,memo));
    
    }
    int longestCommonSubsequence(string text1,string text2){
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>memo(m,vector<int>(n,-1));
        return lcs(text1,text2,m-1,n-1,memo);

    }
        
};