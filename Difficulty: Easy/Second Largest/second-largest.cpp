class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi =-1;
        int new_maxi =-1;
        for(int i=0;i<arr.size();i++){
            maxi = max(maxi,arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==maxi){
                continue;
            }
            else{
                new_maxi = max(new_maxi,arr[i]);
            }
        }
        return new_maxi;
    }
};