class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        // code here
        vector<int>v;
        int i,j,k;
        for(i=0;i<q*2;i+=2){
            int s=0;
            for(j=queries[i]-1;j<queries[i+1];j++)s+=arr[j];
            v.push_back(s);
        }
        return v;
    }
};
