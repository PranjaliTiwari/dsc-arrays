class Solution {
    public int findNumbers(int[] nums) {
      int c=0;
     for(int n:nums){
         if(even(n)){
             c++;
         }
     }
     return c;
    }

    static boolean even(int n) {
    int co=0;
        while (n > 0) {
         co++;
         n=n/10;
        }
        if(co%2==0) {
            return true;
        }
        else{
            return false;
        }
            }

}
