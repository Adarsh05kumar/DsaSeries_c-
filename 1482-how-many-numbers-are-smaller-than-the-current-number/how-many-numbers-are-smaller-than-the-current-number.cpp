class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        
        for (auto x : nums) {
            int count = 0;
            for (auto y : nums) {
                if (y < x) {   
                    count++;
                }
            }
            ans.push_back(count);
        }
        
        return ans;
    }
};
