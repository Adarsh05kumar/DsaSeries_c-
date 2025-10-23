#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        int n = nums.size();
        int closeNum = nums[0] + nums[1] + nums[2];

        for (int k = 0; k < n - 2; k++) {
            int i = k + 1;
            int j = n - 1;

            while (i < j) {
                int sum = nums[k] + nums[i] + nums[j];

                if (abs(target - sum) < abs(target - closeNum)) {
                    closeNum = sum;
                }

                if (sum < target)
                    i++;
                else
                    j--;
            }
        }

        return closeNum;
    }
};
