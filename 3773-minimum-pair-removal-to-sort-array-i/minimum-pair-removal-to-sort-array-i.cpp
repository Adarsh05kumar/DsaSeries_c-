class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        // helper: check non-decreasing
        auto isSorted = [&](vector<int>& a) {
            for (int i = 1; i < a.size(); i++) {
                if (a[i] < a[i - 1]) return false;
            }
            return true;
        };

        while (!isSorted(nums)) {
            int minSum = INT_MAX;
            int idx = 0;

            // find minimum sum adjacent pair (leftmost)
            for (int i = 0; i < nums.size() - 1; i++) {
                int s = nums[i] + nums[i + 1];
                if (s < minSum) {
                    minSum = s;
                    idx = i;
                }
            }

            // merge that pair
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);

            count++;
        }
        return count;
    }
};