class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int>m;
	    int ans = 0, sum = 0;
	    m[0] = -1; //first element
	    for(int i = 0; i < n; i++){
	        sum += arr[i];
	        int tmp = ((sum%k)+k)%k; //if sum is negative;
	        if(tmp == 0)ans++;
	        if(m.find(tmp) != m.end())ans = max(ans, i - m[tmp]);
	        else m[tmp] = i;
	    }
	    return ans;
	}
};
