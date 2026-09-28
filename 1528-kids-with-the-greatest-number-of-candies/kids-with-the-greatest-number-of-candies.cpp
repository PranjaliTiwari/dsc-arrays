class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr(candies.size());
        int p=0;
        for(int i= 0; i<candies.size();i++)
        {
         p=max(p,candies[i]);
                  }
         for(int i= 0; i<candies.size();i++){
         if(candies[i]+extraCandies>=p){
            arr[i]=true;
            }
            else arr[i]= false;
         }
         return arr;
    }
};