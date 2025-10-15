class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       int v=nums.size();
       for(int i=0;i< v-1;i++){
        if(nums[i]==nums[i+1] && nums[i]!=0){
            nums[i]*=2;
            nums[i+1]=0;
        }
       }
       int j=0;
       for(int i=0;i<v; i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
       }
       while(j<v){
        nums[j]=0;
        j++;
       }
       return nums;
    }
};
