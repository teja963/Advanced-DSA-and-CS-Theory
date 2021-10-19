class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int i,j,p=pow(2,20),m=0,n;
        n=prices.size();
         for(i=0;i<n;i++){
             if(prices[i]<p)p=prices[i];
             else if(prices[i]-p>m)m=prices[i]-p;
         }
        return m;
    }
