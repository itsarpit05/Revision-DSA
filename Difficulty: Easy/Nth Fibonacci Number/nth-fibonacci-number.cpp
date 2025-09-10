// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n==0) return 0;
        if(n==1) return 1;
        int f = 0;
        int s = 1;
        for(int i=2;i<=n;i++){
            int t = f+s;
            f=s;
            s=t;
        }
        return s;
    }
};