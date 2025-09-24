class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>>& res,vector<int>& combi,int curr){
       res.push_back(combi);
    
    for(int i=curr;i<nums.size();i++){
        if(i>curr&&nums[i]==nums[i-1]) continue;
        combi.push_back(nums[i]);
        backtrack(nums,res,combi,i+1);
        combi.pop_back();
    }
    }

  
     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<int> combi;
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    backtrack(nums,res,combi,0);
    return res;

        
    }
};




