class Solution {
public:
    string removeOuterParentheses(string s) {
          int c=0;
          int start=0;
          string res="";
          for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    c++;
                }
                else {
                    c--;
                }
                if(c==0){
                    res+=s.substr(start+1,i-start-1);
                    start=i+1;

                }
          } 
          return res;
    }
};