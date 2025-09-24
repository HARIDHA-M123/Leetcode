class Solution {
public:
    void backtrack(int k,int n,vector<vector<int>> &res,vector<int> &combi,int curr){
        if(combi.size()==k){
            int sum = 0;
            for(int num : combi) sum += num;
            if(sum == n) 
            res.push_back(combi);
            return;
        }
        for(int i=curr;i<=9;i++){
            combi.push_back(i);
            backtrack(k,n,res,combi,i+1);
            combi.pop_back();
        }
    }
     vector<vector<int>> combinationSum3(int k,int n) {
        vector<vector<int>> res;
        vector<int> combi;
        backtrack(k,n,res,combi,1);
        return res;

        
    }
};





  