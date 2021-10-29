class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int n=intervals.size(),i=0;
        while(i<n&&intervals[i][1]<newInterval[0])ans.push_back(intervals[i++]); //directly inserting elements less than newInterval range
        
        int start=newInterval[0];
        int end=newInterval[1];
        for(i;i<n&&intervals[i][0]<=newInterval[1];i++)      //merging overlap intervals into single intervals 
        {
            start=min(start,intervals[i][0]);
            end=max(end,intervals[i][1]);
           
        }
        ans.push_back({start,end});
        
        while(i<n)ans.push_back(intervals[i++]); //directly inserting elements greater than newInterval range
        return ans;   
    }
};


