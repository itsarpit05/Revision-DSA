class Solution {
public:
     int findIndexOfMaxEle(int mid , vector<vector<int>>&mat,int n){
        int ind = -1;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(mat[i][mid]>maxi){
                maxi = mat[i][mid];
                ind = i;
            }
        }
        return ind;
     }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n= mat.size();
        int m = mat[0].size();
        int low = 0 ; 
        int high = m-1;
        int left = -1;
        int right = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int maxInd = findIndexOfMaxEle(mid,mat,n);
            if(mid-1>=0){
                left = mat[maxInd][mid-1];
            }else{
                left = -1;
            }
             if(mid+1<m){
                right = mat[maxInd][mid+1];
            }
            else{
                right = -1;
            }
        if(mat[maxInd][mid]>left && mat[maxInd][mid]>right){
            return {maxInd,mid};
        }
        else if(mat[maxInd][mid]<left){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        }
        return {-1,-1};
    }

};