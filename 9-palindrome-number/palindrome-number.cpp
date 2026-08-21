class Solution {
public:
    bool isPalindrome(int x) {
       long long a=0;
       int o=x;
        if(x<0)
        return false;
        while(x>0){
    int p= x%10;
    a = (a*10)+p;
    x = x/10;
        }
          if (a==o)  {
          return true;
          }
          return false;
    }
};