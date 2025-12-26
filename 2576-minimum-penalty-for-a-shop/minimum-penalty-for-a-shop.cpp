class Solution {
public:
    int bestClosingTime(string customers) {
        int n= customers.length();
        int penalty= count(begin(customers),end(customers),'Y');
        int minhour=0;
        int minpenalty=penalty;
        for(int i=0; i<n; i++){
            if(customers[i]=='Y'){
                penalty--;
            }else{
                penalty++;
            }
            if(penalty<minpenalty){
            minpenalty=penalty;
            minhour=i+1;
        }
        }
        
        return minhour;
    }
};