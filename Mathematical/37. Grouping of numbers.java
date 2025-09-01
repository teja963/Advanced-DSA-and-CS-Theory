class Solution {
    static int maxGroupSize(int[] arr, int N, int K) {
        // code here
        int[] remainder = new int[K];
        for(int i = 0; i < N; i++){
            remainder[arr[i] % K]++;
        }
        int low = 1, high = K-1, ans = 0;
        while(low < high){
            ans += Math.max(remainder[low], remainder[high]);
            low++;
            high--;
        }
        if(low == high && remainder[low] > 0)ans++; // i == k - i case both are equal case we need to consider only one
        if(remainder[0] > 0)ans++; // if both elements divisible by K case
        return ans;
    }
};
