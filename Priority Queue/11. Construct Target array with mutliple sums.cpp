class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int>pq;
        long long int sum = 0;
        for(int i = 0; i < target.size(); i++){
            sum += target[i];
            pq.push(target[i]);
        }
        while(pq.top() != 1){
            sum -= pq.top();
            if(sum == 0 || pq.top() <= sum)return false;
            int old = pq.top() % sum; //we will delete all copies of that sum
            if(old == 0 and sum != 1)return false; //only for n = 2 case
            pq.pop();
            pq.push(old);
            sum += old;
        }
        return true;
        
    }
};
