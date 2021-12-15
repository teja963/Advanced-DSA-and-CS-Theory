class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==1)return {0,1};
        vector<int>prev=grayCode(n-1);
        vector<int>current;
        for(int i=0;i<prev.size();i++)
        {
            current.push_back(prev[i]);
        }
        for(int i=prev.size()-1;i>=0;i--)
        {
            current.push_back(1<<(n-1)|prev[i]);
        }
        return current;
        
    }
};
