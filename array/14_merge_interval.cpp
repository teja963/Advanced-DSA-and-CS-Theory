class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    int i=0;
    int n=intervals.size(),s=-1,e=-1;
    while(i<n){
        if(s==-1){
            s=intervals[i][0];
            e=intervals[i][1];
            i++;
        }
        else{
            if(intervals[i][0]<=e){
                e=max(e,intervals[i][1]);
                i++;
            }
            else{
                ans.push_back(vector<int>{s, e});
                s=intervals[i][0];
                e=intervals[i][1];
                i++;
            }
        }
    }
    if(s!=-1){
        ans.push_back(vector<int>{s, e});
    }
    return ans;
    }
};

