class Solution {
public:
  bool isPossible(vector<int>&nums,int mid , int v){
     long long sum = 0;
    for(int i=0;i<nums.size();i++){
     sum += ceil((double)nums[i]/mid);
    }
    if(sum<=v){
        return true;
    }
    else {
        return false;
    }
  }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = -1;
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isPossible(nums,mid,threshold)){
                ans = mid;
                high = mid-1;
            }
            else{
                low =mid+1;
            }
        }
        return ans;
    }
};