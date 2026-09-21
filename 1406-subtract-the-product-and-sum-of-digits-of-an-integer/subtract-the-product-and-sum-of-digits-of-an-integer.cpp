class Solution {
public:
    int subtractProductAndSum(int n) {
        int m=1;
        int sum=0;
        while(n>0){
        int s= n%10;
        
         m=m*s;
        sum=sum+s;
        n=n/10;
    }
     return m-sum;
        }    
       

};