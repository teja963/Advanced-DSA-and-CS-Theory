// There is a 2D grid, in which there are N low speed integer points. 
//There are few subway routes, and the routes do not cross each other. 
//The array Bx, By is of size M and have the points in the subway route such that each point (Bxi,Byi) is connected to (Bx_(i+1),By_(i+1)) with line segments parallel to x-axis or y-axis. 
//Find the number of points which can be covered by the routes. 
//The low-frequency points are given in the array Ax,Ay. N<10^6, M<10^5 and 0<=Axi,Ayi,Bxi,Byi<=10^9.
#include<iostream>
#include<bits/stdc++.h>
const int maxn=1e6+5;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds; 
#define ordered_set tree<int,null_type, less<int>,rb_tree_tag,tree_order_statistics_node_update>
int main() {
    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++)
    {
        int n,m;
        cin>>n>>m;
        vector<int>p(n),q(n); // for storing low speed points
        set<pair<int,int>> s;
        for(int i = 0; i < n; i++)cin>>p[i]; 
        for(int i = 0; i < n; i++)cin>>q[i]; 
        for(int i = 0; i < n; i++)s.insert({p[i],q[i]});
            
        vector<int> a(m),b(m); //for storing the routes
        for(int i = 0; i < m; i++)cin>>a[i]; 
        for(int i = 0; i < m; i++)cin>>b[i]; 
        int ans=0;
        set<int>g,h;
        for (int i=0;i<n; i++){
            g.insert(p[i]);
            h.insert(q[i]);
        }

        map<int,int> m1,m2;
        int curr=1;
        for(auto it:g) m1[it]=curr++;
        int l1=curr;
        curr=1;
        for(auto it:h) m2[it]=curr++;
        int l2=curr;
        vector<ordered_set> s1(l1),s2(l2);
        for(int i=0;i<n;i++)
        {
            s1[m1[p[i]]].insert(q[i]);
            s2[m2[q[i]]].insert(p[i]);
        }
        for(int i=1;i<m;i++)
        {
            if(a[i]==a[i-1])
            {
                int c=a[i];
                int x=min(b[i],b[i-1]);
                int y=max(b[i],b[i-1]);
                int c1=s1[m1[c]].order_of_key(x+1);
                int c2=s1[m1[c]].order_of_key(y);
                ans+=max(0,c2-c1);
            }
            else
            {
                int c=b[i];
                int x=min(a[i],a[i-1]);
                int y=max(a[i],a[i-1]);
                int c1=s2[m2[c]].order_of_key(x+1);
                int c2=s2[m2[c]].order_of_key(y);
                ans+=max(0,c2-c1);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(s.count({a[i],b[i]})) 
                ans++;
        }
        cout<<"#"<<test_case<<" "<<ans<<endl;
    }
    return 0;
}
