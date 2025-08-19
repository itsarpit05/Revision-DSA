class Solution {
public:
    bool isPossible(vector<int>nums,int mid,int k){
        int sum = 0;
        int cnt = 1; // possible sub-arrays
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                cnt++;
                sum=nums[i];
            }
            if(cnt>k){
                return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        
    int low = *max_element(nums.begin(),nums.end());
    int high = accumulate(nums.begin(),nums.end(),0);
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isPossible(nums,mid,k)){
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
    }
      return ans;
    }
};