class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
     for(auto x:accounts){
        int sum=0;
        for(auto y:x){
            sum+=y;

        }
         maxWealth=max( maxWealth,sum);
        
     }
       
        return maxWealth;
    }
};
