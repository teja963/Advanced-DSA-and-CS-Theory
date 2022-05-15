{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<int>tmp(nums.begin(), nums.end());
	    sort(tmp.begin(), tmp.end());
	    unordered_map<int, pair<int,int>>m;
	    for(int i = 0; i < nums.size(); i++){
	        m[tmp[i]].first = nums[i];
	        m[tmp[i]].second = i;
	    }
	    int swaps = 0;
	    for(int i = 0; i < nums.size(); i++){
	        while(nums[i] != tmp[i]){
	            swaps++;
	            swap(nums[i], nums[m[nums[i]].second]);
	        }
	    }
	    return swaps;
	    
	}
};
