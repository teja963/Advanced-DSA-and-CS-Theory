class Solution {
    public boolean canReorderDoubled(int[] arr) {
        Arrays.sort(arr);
        Queue<Integer> q = new LinkedList<>();
        for(int num: arr){
            if(num < 0){
                if(!q.isEmpty() && q.peek() == 2*num){
                    int tmp = q.poll();
                }
                else q.add(num);
            }
        }
        if(q.size() > 0)return false;
        for(int num: arr){
            if(num > 0){
                if(!q.isEmpty() && q.peek() == num){
                    int c = q.poll();
                }
                else q.add(num * 2);
            }
        }
        return q.size() == 0;
    }
}
