class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {

        unordered_map<int,int> m;
        vector<int> ans;

        // Har element ka frequency count
        for (auto &row : nums) {
            for (int val : row) {
                m[val]++;
            }
        }

        // Jo element har row me present ho
        for (auto &x : m) {
            if (x.second == nums.size()) {
                ans.push_back(x.first);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
