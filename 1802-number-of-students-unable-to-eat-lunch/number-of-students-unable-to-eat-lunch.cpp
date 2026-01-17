class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(int s:students){
            q.push(s);

        }
        int i=0;
        int fail=0;
        while(!q.empty() && fail<q.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                fail=0;
            }
            else{
                q.push(q.front());
                q.pop();
                fail++;

            }
        }
        return q.size();
    }
};