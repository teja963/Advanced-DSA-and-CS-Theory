#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    int i,c=1,m=0;;
    if(size==1)return a[0];
    else{
    for(i=1;i<size;i++){
        if(a[m]==a[i])c++;
        else c--;
        if(c==0){m=i;c=1;}}
    c=count(a,a+size,a[m]);
    if(c>size/2)return a[m];
    else return -1;
    }
    // your code here
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
