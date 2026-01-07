class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        
        // Step 1: Count frequency
        for(int x : nums){
            freq[x]++;
        }

        // Step 2: Bucket array (index = frequency)
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto it : freq){
            bucket[it.second].push_back(it.first);
        }

        // Step 3: Collect top k frequent elements
        vector<int> ans;
        for(int i = nums.size(); i >= 0 && ans.size() < k; i--){
            for(int num : bucket[i]){
                ans.push_back(num);
                if(ans.size() == k) break;
            }
        }
        return ans;
    }
};
