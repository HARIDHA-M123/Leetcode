class Solution {
public:
    int mi(string &s,int l,int r,vector<vector<int>> &memo) 
    {
        if(memo[l][r]!=-1) return memo[l][r];
        if(l>=r) return 0;
        if(s[l]==s[r]) return memo[l][r]=mi(s,l+1,r-1,memo);
        return memo[l][r]=1+min(mi(s,l+1,r,memo),mi(s,l,r-1,memo));
        
    }
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>>memo(n,vector<int>(n,-1));
        return mi(s,0,n-1,memo);
    }

};


