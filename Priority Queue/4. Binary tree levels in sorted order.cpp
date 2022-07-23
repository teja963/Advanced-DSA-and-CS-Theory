  vector<vector<int>> binTreeSortedLevels (int arr[], int n)
    {
        // Your code here
        priority_queue<int,vector<int>,greater<int>>pq;
        int k = log(n)/log(2), j = 0;
        vector<vector<int>>v;
        for(int i=0;i<n;i)
        {
            vector<int>ans;
            int l=0;
            while(i<n&&l<pow(2,j)){ pq.push(arr[i++]); l++;}
            while(pq.size()){ans.push_back(pq.top()); pq.pop();}
            v.push_back(ans);
            if(j<=k)j++;
        }
        return v;
    }
