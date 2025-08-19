class Solution {
public:

    bool isPossible(vector<int>&bloomDay,int m , int k , int mid){
        int n= bloomDay.size();
        int cnt = 0;
        int t=0;
        for(int i=0;i<n;i++){
             if(bloomDay[i]<=mid){
                t++;
                if(t==k){
                    cnt++;
                    t=0;
                }
             }
             else{
             t=0;
             }
        }
        if(cnt>=m){
            return true;
        }
        else{
            return false;
        }
      
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()){
            return -1;
        }
        int ans =-1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isPossible(bloomDay,m,k,mid)){
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