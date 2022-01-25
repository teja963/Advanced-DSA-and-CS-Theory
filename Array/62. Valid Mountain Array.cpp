class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)return false;
        int c1 = 0, c2 = 0;
        for(int i = 0; i < arr.size()-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                if(c1)c2++;
                else return false;
            }
            if(arr[i] < arr[i+1])
            {
                if(!c2)c1++;
                else return false;
            }
            if(arr[i] == arr[i+1])return false;
        }
        if(c1 and !c2)return false;
        return true;
    }
};
