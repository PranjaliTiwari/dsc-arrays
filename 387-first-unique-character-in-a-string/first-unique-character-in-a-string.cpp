class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int >hm;
        for(char c: s){
            hm[c]++;
        }
        int i=0;
        for(char c:s){
        
            if(hm[c]==1){
                return i ;
            }
            i++;
        }
        return -1;
    }
};