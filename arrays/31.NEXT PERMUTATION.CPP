class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        while(i>=0&&nums[i]>=nums[i+1]){
            i--;
        }
        int j=nums.size()-1;
        if(i>=0){
        while(nums[j]<=nums[i]){
            j--;
        }
        swap(nums[j],nums[i]);
        }
        reverse(nums.begin()+i+1,nums.end());
         for(auto it:nums){
            cout<<it<<" ";
         }
    
    }
};