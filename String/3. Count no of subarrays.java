class Solution {

    long countSubarray(int arr[], int n, int k) {

        // code here
        long ans = 0;
        long count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > k){
                ans += (count+1)*(n-i);
                count = 0;
            }
            else count++;
        }
        return ans;
    }
}
