class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=nums.front()+nums.back();
        int low=0,high=nums.size()-1;
        while(low<high){
            int val=nums[low++]+nums[high--];
            ans=max(ans,val);
        }
        return ans;
    }
};