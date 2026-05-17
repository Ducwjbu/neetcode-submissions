class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for(int i = 0;i<len - 2;i++){
            if(i > 0 && nums[i - 1] == nums[i]) continue;

            int l = i + 1;
            int r = len - 1;

            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum > 0) r--;
                else if(sum < 0) l++;
                else{
                    ans.push_back({nums[i], nums[l], nums[r]});

                    while(nums[l] == nums[l+1]) l++;
                    while(nums[r-1] == nums[r]) r--;

                    l++;
                    r--;
                }
            }
        }
        return ans;
    }
};
