class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     int count=0;
        //     for(int j=i+1;j<nums.size();j++)
        //         count++;
        //         if(count>n/2)
        //         return nums[i];
        //     }
        //     return 0;
        // }
    


int candidate=nums[0];
int count=0;
for(int i=0;i<nums.size();i++){
    if(count==0)
     candidate=nums[i];
     if(candidate==nums[i])
     count++;
     else
      count--;
    }
    return candidate;
}
};