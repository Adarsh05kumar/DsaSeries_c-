class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int maj=NULL;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(count==0){
                count=1;
                maj=nums[i];
            }else if(nums[i]==maj){
                count++;
            }else{
                count--;
            }
        }
        return maj;
    }
};