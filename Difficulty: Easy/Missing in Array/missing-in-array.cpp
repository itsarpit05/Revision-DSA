class Solution {
  public:
    int missingNum(vector<int>& arr) {
       int actualSum = 0;
       int arraySum=0;
       for(int i=1;i<=arr.size()+1;i++){
           actualSum+=i;
       }
       for(int i=0;i<arr.size();i++){
           arraySum+=arr[i];
       }
        return actualSum-arraySum;
    }
};