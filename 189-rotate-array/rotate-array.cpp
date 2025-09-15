class Solution {
public:
void reverseArray(vector<int>& nums,int left,int right){
    int temp;
    while(left<right){
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;

    }
}
    void rotate(vector<int>& nums, int k) {
        int temp;
        int n=nums.size();
        k=k%n;
        reverseArray(nums,0,n-1);
        reverseArray(nums,0,k-1);
        reverseArray(nums,k,n-1);
        
    }
};