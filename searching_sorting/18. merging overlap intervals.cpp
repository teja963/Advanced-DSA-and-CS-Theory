//Intervals = {{1,3},{2,4},{6,8},{9,10}}
//Output: {{1, 4}, {6, 8}, {9, 10}}


// Intervals = {{6,8},{1,9},{2,4},{4,7}}
// Output: {{1, 9}}
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size() == 0)
            return ans;
        sort(intervals.begin(), intervals.end());
        int l = intervals[0][0];
        int r = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] <= r)
                r = max(r, intervals[i][1]);
            else{
                ans.push_back({l,r});
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }
        ans.push_back({l,r});
        return ans;
    }
