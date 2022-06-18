#include<bits/stdc++.h>
using namespace std;
int p1, p2, p3, n1, n2, n3, n, ans;
int a[100];
int fun(){
    for(int i = 1; i <= (n-n2-n3); i++){
        for(int j = i+n1; j <= (n-n3); j++){
            for(int k = j+n2; k <= n; k++){
                int tmp = 0;
                for(int p = i; p < i+n1; p++){
                    tmp += abs(p1-p);
                }
                for(int p = j; p < j+n2; p++){
                    tmp += abs(p2-p);
                }
                for(int p = k; p < k+n3; p++){
                    tmp += abs(p3-p);
                }
                tmp += (n1+n2+n3);
                ans = min(ans, tmp);
            }
        }
    }
    return ans;
}
int main(){
    cin>>n;
    cin>>p1>>p2>>p3;
    cin>>n1>>n2>>n3;
    ans = INT_MAX;
    cout<<fun()<<endl;
    return 0;
}
