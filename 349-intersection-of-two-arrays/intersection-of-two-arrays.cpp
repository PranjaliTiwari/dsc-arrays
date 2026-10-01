class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> hm;
    vector<int> p;
    for(int i : nums1){
        hm[i]=1;
    }
     for(int i : nums2){
        if(hm[i]!=0&&hm.count(i)==1){
            hm[i]=0;
            p.push_back(i);
        }
     }
     return p;
    }
};