class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        int j=1;
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                return nums[i];
            }
            i+=2;
            j+=2;
        }
        return nums[i];
        
    }
};