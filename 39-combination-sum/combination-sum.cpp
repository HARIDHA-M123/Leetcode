class Solution {
public:
    void backtrack(vector<int>& candidates, int target,vector<vector<int>> &res,vector<int> &combi,int curr) {
        if(target==0){
            res.push_back(combi);
            return;
        }
        if(target<0) return;
        for(int i=curr;i<candidates.size();i++){
            combi.push_back(candidates[i]);
            backtrack(candidates,target-candidates[i],res,combi,i);
            combi.pop_back();

            }
        }
        vector<vector<int>> combinationSum(vector<int>& candidates,int target){
        int n=candidates.size();
        vector<vector<int>> res;
        vector<int> combi;
        backtrack(candidates,target,res,combi,0);
        return res;
    }


            
       
};

