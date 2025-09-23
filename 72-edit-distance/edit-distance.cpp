class Solution {
public:
    int minDistance(string &s, string &t,int i,int j,vector<vector<int>> &memo) {
        if(j<0) return i+1;
        if(i<0) return j+1;
        if(memo[i][j]!=-1) return memo[i][j];
        if(s[i]==t[j]) return memo[i][j]=minDistance(s,t,i-1,j-1,memo);
        return memo[i][j]=1+min(minDistance(s,t,i-1,j,memo),min(minDistance(s,t,i,j-1,memo),minDistance(s,t,i-1,j-1,memo)));
    }
    int minDistance(string s1,string s2){
        int m=s1.length();
        int n=s2.length();
        vector<vector<int>>memo(m,vector<int>(n,-1));
        return minDistance(s1,s2,m-1,n-1,memo);
    }
};