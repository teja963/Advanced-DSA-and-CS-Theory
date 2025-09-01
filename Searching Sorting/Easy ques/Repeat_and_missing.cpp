#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int i,j;
        int *a;
        for(i = 0; i < n; i++){
            if(arr[abs(arr[i])-1] > 0)arr[abs(arr[i])-1] =- arr[abs(arr[i])-1];
            else j = abs(arr[i]);
        }
        a[0] = j;
        for(i = 0; i < n; i++)if(arr[i] > 0)j = i+1;
        a[1] = j;
        return a;
    }
};
