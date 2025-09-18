class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        int maxFreq=0;
        map<char,int> mp;
        for(int left=0,right=0;right<s.size();right++){
            mp[s[right]]++;
            maxFreq=max(maxFreq,mp[s[right]]);
            while(right-left+1-maxFreq>k){
                mp[s[left]]--;
                left++;
            }
            res=max(res,right-left+1);
        }
        return res;

    }
};