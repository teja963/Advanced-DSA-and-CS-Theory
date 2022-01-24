class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;
        string s = "123456789";
        int len = to_string(low).size();
        int size = to_string(high).size();
        while(len <= size)
        {
            for(int i = 0; i < 10-len; i++)
            {
                string tmp = s.substr(i,len);
                int val = stoi(tmp);
                if(val >= low && val <= high)v.push_back(val);
            }
            len++;
        }
    return v;
    }
};
