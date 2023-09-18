import java.util.*;

class Solution {
    private static int n;
    private static long ans;
    private static int[] arr;
    private static List<List<Integer>> adj;
    private static int total;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            ans = 0;
            n = sc.nextInt();
            arr = new int[n];

            for (int i = 0; i < n; ++i)
                arr[i] = sc.nextInt();

            adj = new ArrayList<>();
            for (int i = 0; i < n; ++i)
                adj.add(new ArrayList<>());

            for (int i = 0; i < n - 1; ++i) {
                int u = sc.nextInt() - 1;
                int v = sc.nextInt() - 1;
                adj.get(u).add(v);
                adj.get(v).add(u);
            }

            solve();

            System.out.println(ans);
        }
        sc.close();
    }

    private static void solve() {
        total = 0;
        for (int a : arr)
            total += a;

        long[] sum = new long[n];
        long[] subTotal = new long[n];

        dfs1(0, -1, sum, subTotal);
        dfs2(0, -1, 0, sum, subTotal);
    }

    private static void dfs1(int u, int par, long[] sum, long[] subTotal) {
        sum[u] = arr[u];
        subTotal[u] = 0;

        for (int v : adj.get(u)) {
            if (v != par) {
                dfs1(v, u, sum, subTotal);
                sum[u] += sum[v];
                subTotal[u] += subTotal[v] + sum[v];
            }
        }
    }

    private static void dfs2(int u, int par, long up, long[] sum, long[] subTotal) {

        long curr = subTotal[u] + up + total - sum[u];
        ans = Math.max(ans, curr);

        for (int v : adj.get(u)) {
            if (v != par) {
                dfs2(v, u, curr - subTotal[v] - sum[v], sum, subTotal);
            }
        }
    }
}