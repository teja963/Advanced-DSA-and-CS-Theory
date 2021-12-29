class Solution
{   
public:
vector<int> repeatedRows(vector<vector<int>> matrix, int M, int N) 
{ 
    // Your code here
    set<vector<int>>m;
    vector<int>v;
    for(int i=0;i<matrix.size();i++)
    {
        if(m.find(matrix[i])!=m.end())v.push_back(i);
        else m.insert(matrix[i]);
    }
    return v;
} 
};
