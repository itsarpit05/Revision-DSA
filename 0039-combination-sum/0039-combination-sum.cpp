class Solution {
    void helper(int ind , int target,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&ds){
        if(ind == candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            helper(ind,target-candidates[ind],candidates,ans,ds);
            ds.pop_back();
        }
        helper(ind+1,target,candidates,ans,ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,target,candidates,ans,ds);
        return ans;
    }
};