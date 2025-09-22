class Solution {
public:
    int rob(vector<int>& nums,int n,vector<int>&memo) {
        if(memo[n]!=-1) return memo[n];
        if(n==0) return memo[n]=nums[0];
        if(n==1) return memo[n]=max(nums[0],nums[1]);
        return memo[n]=max(nums[n]+rob(nums,n-2,memo),rob(nums,n-1,memo));

    }
    int rob(vector<int>& nums){
        int n=nums.size();
        vector<int> memo(n,-1);
        return rob(nums,n-1,memo);
    }
        
    
};