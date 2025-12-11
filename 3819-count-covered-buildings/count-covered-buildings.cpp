#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, vector<int>> rowMap; // y → all x's
        unordered_map<int, vector<int>> colMap; // x → all y's

        // Fill maps
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            rowMap[y].push_back(x);
            colMap[x].push_back(y);
        }

        // Sort each row/column list for fast min/max & binary search (optional)
        for (auto &p : rowMap) sort(p.second.begin(), p.second.end());
        for (auto &p : colMap) sort(p.second.begin(), p.second.end());

        int covered = 0;

        for (auto &b : buildings) {
            int x = b[0], y = b[1];

            auto &xs = rowMap[y];
            auto &ys = colMap[x];

            bool left  = xs.front() < x;
            bool right = xs.back() > x;
            bool down  = ys.front() < y;
            bool up    = ys.back() > y;

            if (left && right && up && down)
                covered++;
        }

        return covered;
    }
};
