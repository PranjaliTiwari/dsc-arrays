class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> num(m+n);
        for(int i = 0; i<n;i++) {
            num[i]= nums1[i];
       
        }
        for(int i = 0 ; i<m;i++) {
            num[n+i]= nums2[i];
           
        }
        sort(num.begin(),num.end());
        int size = n+m;
        if (size%2==0)
            {
            return (num[size/2-1]+num[size/2])/2.0;
            }
            else{
                return num[size/2];
            }
         
        
    }
};