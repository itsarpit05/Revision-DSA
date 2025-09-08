class Solution {
public:

    bool isPossible(int num){
        while(num!=0){
            int d= num%10;
            if(d==0) return false;
        num/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int val = n-i;
            if(isPossible(i) && isPossible(val)){
                return {i,val};
            }
        }
        return {};
    }
};