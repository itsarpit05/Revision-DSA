class Solution {
public:
   bool isPossible(vector<int>&weights,int days , int cap){
    int countPossibledays=1;
    int s = 0;
    for(int i=0;i<weights.size();i++){
     s+=weights[i];
     if(s>cap){
        countPossibledays++;
        s=weights[i];
     }
    }
    if(countPossibledays<=days){
        return true;
    }
    else{
        return false;
    }
   }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end()); //heavist package must be shipped at once
        int sum = 0;
        int ans = -1;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int high = sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(weights,days,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};