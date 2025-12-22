class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int sIndex = s.size() - 1;
        int tIndex = t.size() - 1;

        int sBack = 0, tBack = 0;

        while (sIndex >= 0 || tIndex >= 0) {

            // process backspaces in s
            while (sIndex >= 0) {
                if (s[sIndex] == '#') {
                    sBack++;
                    sIndex--;
                } else if (sBack > 0) {
                    sBack--;
                    sIndex--;
                } else break;
            }

            // process backspaces in t
            while (tIndex >= 0) {
                if (t[tIndex] == '#') {
                    tBack++;
                    tIndex--;
                } else if (tBack > 0) {
                    tBack--;
                    tIndex--;
                } else break;
            }

            // compare characters
            if (sIndex >= 0 && tIndex >= 0) {
                if (s[sIndex] != t[tIndex]) return false;
            } 
            else if (sIndex >= 0 || tIndex >= 0) {
                return false;
            }

            sIndex--;
            tIndex--;
        }

        return true;
    }
};
