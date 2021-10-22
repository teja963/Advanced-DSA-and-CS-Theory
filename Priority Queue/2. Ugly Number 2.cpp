class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        pq.push(1);
        long long prev;
        for(int i=1;i<n;i++)
        {
            prev=pq.top();
            pq.push(prev*2);
            pq.push(prev*3);
            pq.push(prev*5);
            while(pq.top()==prev)pq.pop();
        }
        return pq.top();
    }
};
