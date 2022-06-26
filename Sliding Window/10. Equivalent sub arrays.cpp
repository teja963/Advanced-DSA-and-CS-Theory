public:
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        unordered_set<int>s;
        unordered_map<int, int>m;
        for(int i = 0; i < n; i++)s.insert(arr[i]);
        int ans = 0, i = 0, j = 0;
        while(j < n){
            m[arr[j]]++;
            while(i <= j and m.size() == s.size()){
                ans += n-j;
                m[arr[i]]--;
                if(m[arr[i]] == 0)m.erase(arr[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};
