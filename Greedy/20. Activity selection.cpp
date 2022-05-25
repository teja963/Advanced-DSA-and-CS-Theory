
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i = 0; i < n; i++)
        {
            v.push_back({end[i], start[i]});
        }
        
        sort(v.begin(), v.end());
        int count = 1, j = 0, i = 1;
        while(i < n)
        {
            if(v[i].second > v[j].first)
            {
                count++;
                j = i;
            }
            i++;
        }
        return count;
        
    }
