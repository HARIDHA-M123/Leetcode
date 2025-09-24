class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>>& res,vector<int>& combi,int curr){
       res.push_back(combi);
    
    for(int i=curr;i<nums.size();i++){
        combi.push_back(nums[i]);
        backtrack(nums,res,combi,i+1);
        combi.pop_back();
    }
    }

  
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> combi;
    vector<vector<int>> res;
    backtrack(nums,res,combi,0);
    return res;

        
    }
};


