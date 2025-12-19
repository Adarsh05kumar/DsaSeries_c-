class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg, pos;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        // Square negatives and reverse
        for (int i = 0; i < neg.size(); i++)
            neg[i] = neg[i] * neg[i];
        reverse(neg.begin(), neg.end());

        // Square positives
        for (int i = 0; i < pos.size(); i++)
            pos[i] = pos[i] * pos[i];

        // Merge two sorted arrays
        int i = 0, j = 0, k = 0;
        vector<int> res(neg.size() + pos.size());

        while (i < neg.size() && j < pos.size()) {
            if (neg[i] <= pos[j])
                res[k++] = neg[i++];
            else
                res[k++] = pos[j++];
        }

        while (i < neg.size())
            res[k++] = neg[i++];

        while (j < pos.size())
            res[k++] = pos[j++];

        return res;
    }
};
