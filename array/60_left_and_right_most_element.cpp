

 // } Driver Code Ends


class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int l=lower_bound(v.begin(),v.end(),x)-v.begin();
        int h=upper_bound(v.begin(),v.end(),x)-v.begin()-1;
        if(l>=v.size()||v[l]!=x)return {-1,-1};
        else return {l,h};
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
