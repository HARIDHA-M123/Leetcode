class Solution {
public:
    void backtrack(vector<int>& candidates,int target,vector<vector<int>>& res,vector<int>& combi,int curr){
        if(target==0){
            res.push_back(combi);
            return;
            
        }
         if(target<0) return;
         for(int i=curr;i<candidates.size();i++){
            if(i>curr&&candidates[i]==candidates[i-1])
            continue;
            combi.push_back(candidates[i]);
            backtrack(candidates,target-candidates[i],res,combi,i+1);
            combi.pop_back();

            }
        }
    vector<vector<int>> combinationSum2(vector<int>& candidates,int target) {
        vector<vector<int>> res;
        vector<int> combi;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,res,combi,0);
        return res;

        
    }
};





  