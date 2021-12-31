class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n = citations.size();
        int h = citations.size(),l = 0;
        while(l <= h)
        {
            int m =(l+h)/2;
            int index = n - (lower_bound(citations.begin(),citations.end(),m)- citations.begin());
            if(index == m)return m;
            else if(index < m)h = m - 1;
            else l = m + 1; 
        }
        return h;
    }
};
