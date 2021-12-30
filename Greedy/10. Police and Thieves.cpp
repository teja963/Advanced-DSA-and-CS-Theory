 int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int count = 0;
        vector<int>v1,v2;
        for(int i = 0;i < n ; i++)
        {
            if(arr[i] == 'P')v1.push_back(i);
        }
         for(int i = 0;i < n ; i++)
        {
            if(arr[i] == 'T')v2.push_back(i);
        }
        int i = 0, j = 0;
        while(i < v1.size() && j < v2.size())
        {
            if(abs(v1[i] -v2[j]) <= k)
            {
                count++;
                i++;
                j++;
            }
            else if(v1[i] < v2[j])i++;
            else j++;
        }
       return count;
        
    }
