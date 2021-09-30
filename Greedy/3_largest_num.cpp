class Solution {
public:
    static bool cmp(int a,int b){
        string s1=to_string(a);
        string s2=to_string(b);
        return s1+s2>s2+s1;
    }
    string largestNumber(vector<int>& nums) {
     string s;
     sort(nums.begin(),nums.end(),cmp);
    for(int i=0;i<nums.size();i++)s+=to_string(nums[i]);
        if(nums[0]==0)return "0";
        return s;
    }
