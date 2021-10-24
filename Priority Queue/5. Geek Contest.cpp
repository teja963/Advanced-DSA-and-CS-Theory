#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	
    int t;
    cin>>t;
    while(t--)
    {
        int n,j;
        cin>>n;
        priority_queue<pair<int,int>>pq;
        for(int i=1;i<=n;i++)
        {
            cin>>j;
            pq.push({j,i});
        }
        while(pq.size())
        {
            cout<<pq.top().second<<" ";
            pq.pop();
        }
        cout<<"\n";
    }
	return 0;
}
