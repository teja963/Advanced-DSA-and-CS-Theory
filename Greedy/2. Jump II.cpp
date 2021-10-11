class Solution {
public:
    int jump(vector<int>& nums) {
        // code here
        int i,reach=0,current=0,jmps=0;
        for(i=0;i<nums.size()-1;i++){
             reach=max(reach,i+nums[i]);
            if(i==current){
                current=reach;
                jmps++;
            }
    }
       return jmps;
    }
