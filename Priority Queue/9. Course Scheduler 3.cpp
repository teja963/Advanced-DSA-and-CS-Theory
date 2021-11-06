class Solution {
public:
     static bool cmp(vector<int>v1,vector<int>v2)
      {
          return v1[1]<v2[1];
      }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),cmp);
        priority_queue<int>pq;
        int count=0;
        for(auto x:courses)
        {
            count+=x[0];
            pq.push(x[0]);
            while(count>x[1])
            {
                count-=pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};


//Method 2
class Solution {
public:
     static bool cmp(vector<int>p1,vector<int>p2)
      { 
         return p1[1]<p2[1];
      }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),cmp);
        int count=0;
        priority_queue<int>pq;
        for(int i=0;i<courses.size();i++)
        {
            if(count+courses[i][0]<=courses[i][1]) //general case
            {
                count+=courses[i][0];
                pq.push(courses[i][0]);
            }
            else if(!pq.empty()&&pq.top()>courses[i][0]) //upcmng course duration is less then pq.top, in that case delete that course and insert this
            {
                int x=pq.top();
                pq.pop();
                count-=x;  
                pq.push(courses[i][0]);
                count+=courses[i][0];
            }
        }
        return pq.size();
     
    }
};
