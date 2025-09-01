class Solution {
    public static int minChar(String str) {
       //Write your code here
       int count = 0;
       int low = 0;
       int high = str.length()-1;
       while(low < high){
           if(str.charAt(low) == str.charAt(high)){
               low++;
               high--;
           }
           else{
               count++;
               low = 0;
               high = str.length()-1-count;
           }
       }
       return count;
    }
}
