class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l = 0, h = citations.size(), n;
        n = citations.size();
        while(l <= h)
        {
            int m = (l+h)/2;
            int index = n - (lower_bound(citations.begin(),citations.end(),m) - citations.begin());
            if(index == m)return m;
            else if(index < m)h = m - 1;
            else l = m + 1;
        }
        return h;
    }
};
