class Solution {
public:
    vector<int>tmp,numbers;
    vector<vector<int>>ans;
    void findcombi(int start,int k,int n)
    {
        if(tmp.size()==k)
        {
            ans.push_back(tmp);
            return ;
        }
        for(int i=start;i<n;i++)
        {
            tmp.push_back(numbers[i]);
            findcombi(i+1,k,n);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        for(int i=0;i<n;i++)numbers.push_back(i+1);
        findcombi(0,k,n);
        return ans;
    }
};
