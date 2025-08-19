class Solution {
public:
    bool isPossible(vector<int>&piles,int h , int mid){
          long long sum = 0;
          for(int i=0;i<piles.size();i++){
           sum += ceil((double)piles[i] / mid);
          }
          if(sum<=h){
            return true;
          }
          else{
            return false;
          }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans =-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isPossible(piles,h,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};