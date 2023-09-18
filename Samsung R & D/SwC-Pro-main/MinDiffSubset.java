import java.lang.reflect.Array;
import java.util.*;

class Solution {

    // Function to find the minimum sum
    public static int findMinRec(int arr[], int i, int sumCalculated, int sumTotal, int[][] dp) {
        // If we have reached last element.
        // Sum of one subset is sumCalculated,
        // sum of other subset is sumTotal-
        // sumCalculated. Return absolute
        // difference of two sums.
        if (i == arr.length)
            return Math.abs((sumTotal - sumCalculated) - sumCalculated);

        if (dp[i][sumCalculated] != -1)
            return dp[i][sumCalculated];
        // For every item arr[i], we have two choices
        // (1) We do not include it first set
        // (2) We include it in first set
        // We return minimum of two choices
        return Math.min(findMinRec(arr, i + 1, sumCalculated + arr[i], sumTotal, dp),
                findMinRec(arr, i + 1, sumCalculated, sumTotal, dp));
    }

    // Returns minimum possible difference between
    // sums of two subsets
    public static int findMin(int arr[], int n) {
        // Compute total sum of elements
        int sumTotal = 0;
        for (int i = 0; i < n; i++)
            sumTotal += arr[i];

        int[][] dp = new int[n + 1][sumTotal + 1];
        for (int i = 0; i < n + 1; ++i)
            Arrays.fill(dp[i], -1);

        // Compute result using recursive function
        return findMinRec(arr, 0, 0, sumTotal, dp);
    }

    static int minDifference(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];
        int y = sum / 2 + 1;

        // dp[i] gives whether is it possible to get i as sum of elements
        // dd is helper variable we use dd to ignoring duplicates
        boolean dp[] = new boolean[y];
        boolean dd[] = new boolean[y];
        Arrays.fill(dp, false);
        Arrays.fill(dd, false);

        // Initialising dp and dd
        for (int i = 0; i < y; i++)
            dp[i] = dd[i] = false;

        // sum = 0 is possible
        // let dp array is used for storing previous values and dd array is used to
        // store current values
        dp[0] = true;
        for (int i = 0; i < n; i++) {
            // updating dd[k] as true if k can be formed using elements from 1 to i+1
            for (int j = 0; j + arr[i] < y; j++) {
                if (dp[j])
                    dd[j + arr[i]] = true;
            }

            // updating dd
            for (int j = 0; j < y; j++) {
                if (dd[j])
                    dp[j] = true;

                dd[j] = false; // reset dd
            }
        }
        // checking the number from sum/2 to 1 which is
        // possible to get as sum

        for (int i = y - 1; i >= 0; i--) {
            if (dp[i])
                return (sum - 2 * i);
            // since i is possible to form then another
            // number is sum-i so mindifference is sum-i-i
        }
        return 0;
    }

    /* Driver program to test above function */
    public static void main(String[] args) {
        int arr[] = { 3, 1, 4, 2, 2, 1 };
        int n = arr.length;
        System.out.print("The minimum difference" + " between two sets is " + findMin(arr, n));
    }
}