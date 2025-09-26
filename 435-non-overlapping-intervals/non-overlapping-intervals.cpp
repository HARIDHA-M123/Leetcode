bool cmp(vector<int> &a,vector<int> &b){
    return a[1]<b[1];
    }
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end(),cmp);
    int removeCount=0,cet=INT_MIN;
    for(auto i:intervals){
        if(i[0]>=cet)cet=i[1];
        else
        ++removeCount;
    }
    return removeCount;
        
    }
};