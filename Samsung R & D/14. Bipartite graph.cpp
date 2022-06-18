/*
https://www.careercup.com/question?id=5137923582722048
*/

/*
Given a graph print either of the set of the vertices that are colored with the same color. And if the graph
is not bipartite print “-1”. Test cases also included the cases when a graph is not connected.
*/
#include<bits/stdc++.h>
using namespace std;
int t, n, m, ans;
int a[100][100], color[100];
bool isbipartite(int i){
	bool flag = true;
	for(int j = 0; j < n; j++){
		if(a[i][j] == 1){
			if(color[j] == -1){
				color[j] = 1 - color[i];
				flag = flag & isbipartite(j); 
			}
			else if(color[i] == color[j])return false;
		}
	}
	return flag;
}
int main(){
    int t;
    cin>>t;
    for(int test_case = 1; test_case <= t; test_case++){
    	cin>>n;
    	memset(color, -1, sizeof(color));
    	memset(a, 0, sizeof(a));
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
    			cin>>a[i][j];
    		}
    	}
    	int flag = 1;
    	for(int i = 0; i < n; i++){
    		if(color[i] == -1){
    			color[i] = 0;
    			if(!isbipartite(i)){
    				flag = 0;
    				cout<<"-1"<<endl;
    			}
    		}
    	}
    	if(flag){
			for(int i = 0; i < n; i++){
				if(color[i] == 0){
					cout<<i+1<<" ";
				}
			}
    	}
    }
    return 0;
}
