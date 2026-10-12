class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string p = "";
        int i=0;
        while(i<word1.size()||i<word2.size()){
            if(i<word1.size()){
                p+=word1[i];
            }
            if(i<word2.size()){
                p+=word2[i];
            }
              i++;
        }
        return p;
    }

};