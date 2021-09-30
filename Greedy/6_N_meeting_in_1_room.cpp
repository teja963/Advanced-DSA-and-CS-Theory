class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)v.push_back(make_pair(end[i],start[i]));
        sort(v.begin(),v.end());  //sort according to finishing time
        int i,c=1,prev=v[0].first;
        for(i=1;i<n;i++)
        {
            if(prev<v[i].second){
                c++;
                prev=v[i].first;
            }
        }
        return c;
    }
