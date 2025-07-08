class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int index=1;
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]!=nums[j]){
                nums[index++]=nums[j];
            }
        }
        return index;
    }
};