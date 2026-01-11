class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0, maxCount = 0;
        unordered_set<char> vowels = {'a','e','i','o','u'};
        
        // First window
        for (int i = 0; i < k; i++) {
            if (vowels.count(s[i])) count++;
        }
        
        maxCount = count;
        
        // Sliding window
        for (int i = k; i < s.size(); i++) {
            if (vowels.count(s[i])) count++;
            if (vowels.count(s[i - k])) count--;
            
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
};
