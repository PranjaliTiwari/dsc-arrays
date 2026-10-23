class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size()-1;
        int c=0;
       int left=0;
       int right =n;
       while(left<right){
         if(nums[left]== 0 && nums[right]!=0){
            int temp=0;
             temp= nums[right] ;
             nums[right]=nums[left];
             nums[left]=temp;
             c++;
             left++;
             right--;
         }
             else if(nums[left]!=0){
                left++;
             }
             else if (nums[right] == 0) {
                right--;
       }
       }
       return c;
       
    }
};