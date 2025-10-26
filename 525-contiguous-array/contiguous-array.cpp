class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> prefixSumIndex;
        prefixSumIndex[0] = -1;
        int maxLength = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
          
            sum += (nums[i] == 0 ? -1 : 1);

            if (prefixSumIndex.find(sum) != prefixSumIndex.end()) {
               
                maxLength = max(maxLength, i - prefixSumIndex[sum]);
            } else {
               
                prefixSumIndex[sum] = i;
            }
        }

        return maxLength;
    }
};
