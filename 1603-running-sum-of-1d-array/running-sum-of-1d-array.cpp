#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ps(nums.size());
        ps[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            ps[i] = ps[i - 1] + nums[i];
        }
        return ps;
    }
};
