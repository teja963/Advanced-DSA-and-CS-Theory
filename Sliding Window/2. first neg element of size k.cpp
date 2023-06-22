#include<bits/stdc++.h> 
using namespace std; 
void firstNegativeInteger(int *arr, int k, int n) {
    // create a deque q
    deque<int> q;
    
    // traverse the first window
    for (int i = 0; i < k; i++) {
        // if the current element is negative add it to the end of deque
        if (arr[i] < 0)
            q.push_back(i);
    }
    
    // if deque is not empty, front of deque is the index of first negative element
    // else there is no negative element in this window
    if (!q.empty())
        cout<<arr[q.front()]<<" ";
    else
        cout<<"0 ";
        
    for (int i = k; i < n; i++) {
        // remove previous window elements
        while (!q.empty() && q.front() <= (i - k)) {
            q.pop_front();
        }
        
        // if the current element is negative, add it to the deque
        if (arr[i] < 0)
            q.push_back(i);
            
        // if deque is not empty, front of deque is the index of first negative element
        // else there is no negative element in this window
        if (!q.empty())
            cout<<arr[q.front()]<<" ";
        else 
            cout<<"0 ";
    }
    
    cout<<endl;
}
int main() {
    // Example 1
    int arr1[] = {5, -2, 3, 4, -5};
    int k1 = 2;
    firstNegativeInteger(arr1, k1, sizeof(arr1) / sizeof(arr1[0]));
    // Example 2
    int arr2[] = {7, 9, -1, 2, 3, 4, -2, -3, -4};
    int k2 = 3;
    firstNegativeInteger
