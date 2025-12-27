class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long m=LONG_MIN, sm=LONG_MIN,tm=LONG_MIN;
        for(auto x:nums){
            if(x==m||x==sm||x==tm){
                continue;
            }else if(x>m){
                tm=sm;
                sm=m;
                m=x;

            }else if(x>sm && x<m){
                tm=sm;
                sm=x;
            }else if(x> tm && x<sm && x<m){
                tm=x;
            }
        }
        return tm== LONG_MIN ? m : tm;
    }
};