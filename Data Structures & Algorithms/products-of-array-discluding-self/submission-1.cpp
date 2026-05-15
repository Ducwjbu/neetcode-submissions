class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(1);
        int pre = 1;
        int len = nums.size();
        for(int i = 0; i < len - 1;i++){
            pre *= nums[i];
            ans.push_back(pre);
        }
        int post = nums[len - 1];
        for(int i = len -2;i >= 0;i--){
            ans[i] *= post;
            post *= nums[i];
        }
        return ans;
    }
};
