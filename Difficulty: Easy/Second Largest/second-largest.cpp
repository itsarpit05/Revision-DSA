class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l = arr[0];
        int sl= -1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<l && arr[i]>sl){
                sl = arr[i];
            }
            else if(arr[i]>l){
            sl = l;
            l = arr[i];
                
            }
        }
        return sl;
    }
};