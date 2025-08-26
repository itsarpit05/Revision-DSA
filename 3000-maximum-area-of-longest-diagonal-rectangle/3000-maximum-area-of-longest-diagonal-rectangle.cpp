class Solution {
public:
    double calDiagonal(vector<int>&dimensions){
     return sqrt(((dimensions[0]*dimensions[0])+(dimensions[1]*dimensions[1])));
    }
   int calArea(vector<int>&dimensions){
      return dimensions[0]*dimensions[1];
   }
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        double maxDiagonal = -1.0;
        int res;
        for(int i=0;i<n;i++){
             double diagonal = calDiagonal(dimensions[i]);
              int area = calArea(dimensions[i]);
            if(diagonal>maxDiagonal){
             maxDiagonal = diagonal;
             res = area;
           }else if (diagonal == maxDiagonal && area > res) {
                res = area;  
            }
        }
        return res;
    }
};