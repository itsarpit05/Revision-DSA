#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>&height){
    int low = 0 , high = height.size()-1;
    int max_area = 0;
    while(low<=high){
        int area = min(height[low],height[high])*(high-low); // here j-i = width and min() = height
        max_area=max(max_area,area);
        if(height[low]<=height[high]){
            /*************The whole idea here is to move towards thev wall with greater height************ */
            low++;               
                }
                else{
                    high--;
                }
    }
    return max_area;
}
int main() {
  vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << maxArea(v);
  return 0;
}
