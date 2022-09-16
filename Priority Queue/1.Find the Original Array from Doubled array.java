class Solution {
    public int[] findOriginalArray(int[] changed) {
        int[] ans = new int[changed.length/2];
        Queue<Integer> q = new LinkedList<>();
        Arrays.sort(changed);
        int i = 0;
        for(int num: changed){
            if(!q.isEmpty() && q.peek() == num){
                ans[i++] = q.poll()/2;
            }
            else q.add(num*2);
        }
        return q.size() > 0? new int[]{}: ans;
    }
}
