class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>>mp;
        for(string s:strs){
            string ss=s;
            sort(s.begin(),s.end());
            if(mp.contains(s))
               mp[s].push_back(ss);
            else{
                vector<string> v;
                v.push_back(ss);
                mp[s]=v;
            }
        }
            for(pair<string,vector<string>> p:mp)
            res.push_back(p.second);
            return res;
        }
    
        
    
};