class Solution {
public:
     int fun(vector<int>&nums)
     {
         if(nums.size()>=2)
        {
            if(nums.size()==2)
            {
                if(nums[0]<nums[1])return 1;
            }
             else{
                 
                if(nums[nums.size()-1]>nums[nums.size()-2])return nums.size()-1;
             }
        }
         return 0;
     }
    int findPeakElement(vector<int>& nums) {
        int ans=0,i,c=0;
        if(nums.size()==1)return 0;
        for(i=1;i<nums.size()-1;i++)
        {
            if(nums[i-1]<nums[i]&&nums[i]>nums[i+1]){c=1; break;}
        }
        return c==1?i:fun(nums);
       
    }
};


//Method 2 binary search both solutions are 100%faster
public class Solution {
    public int findPeakElement(int[] nums) {
        int l = 0, r = nums.length - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] > nums[mid + 1])
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
}
