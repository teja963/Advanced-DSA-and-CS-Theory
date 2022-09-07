class Solution {
    public static int isStackPermutation(int n, int[] ip, int[] op) {
        Stack<Integer>st = new Stack<Integer>();
        int j = 0;
        for(int i = 0; i < n; i++){
            st.push(ip[i]);
            if(st.peek() == op[j]){
                while(st.size() > 0 && st.peek() == op[j]){
                        st.pop();
                        j++;
                }
            }
        }
        return st.empty()?1:0;
    }
}
