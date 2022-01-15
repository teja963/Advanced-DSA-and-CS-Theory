 void max_heapify(vector<int>& v)
    {
        int child = v.size() - 1;
        while (child != 0)
        {
            int parent = (child-1)/2;
            if(v[parent] < v[child])swap(v[parent], v[child]);
            else break;
            child = parent;
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        for(auto x:b)
        {
            a.push_back(x);
            max_heapify(a);
        }
        return a;
    }
};
