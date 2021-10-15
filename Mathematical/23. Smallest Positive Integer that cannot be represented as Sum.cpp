//arr={1,1,1)    ans=4
//arr={1,3,4,6,7}  ans=2

class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        // code here 
        sort(array.begin(),array.end());
        long long ans=1;
        //if array[i]>ans then it won't possible bcz it is increasing
        for(int i=0;i<n&&array[i]<=ans;i++)ans+=array[i];
        return ans;
    } 
    
    
//Time complexity: O(nlog n)
//Space : O(1)
