class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        while(low < high){
            int mid = (low + high)/2;
            if(arr[mid] > arr[high])low = mid+1;
            else high = mid;
        }
        return arr[low];
    }
};
