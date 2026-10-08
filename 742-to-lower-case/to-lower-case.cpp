class Solution {
public:
    string toLowerCase(string s) {
        //string p=;
        for(int i =0; i< s.length(); i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};