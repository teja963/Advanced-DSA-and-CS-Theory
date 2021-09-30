class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int i,j,s=0,c=0;
        m[0]=-1;
        for(i=0;i<nums.size();i++){
            s+=nums[i];
            s%=k;
            if(m.find(s)!=m.end()){
                if(i-m[s]>=2)return true;}
            else m[s]=i;
        }
        return false;
    }
