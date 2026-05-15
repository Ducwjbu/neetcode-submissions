class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int b = 0;
        vector <int> ans;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0) b++;
        }
        if(b > 1){
            ans.resize(nums.size(), 0);
            return ans;
        }

        if(b == 1){
            long long all = 1;
            for(int i = 0;i < nums.size(); i++){
                if(nums[i] != 0) all *= nums[i];
            }
            
            for(int i = 0;i<nums.size();i++){
                if(nums[i] == 0) ans.push_back(all);
                else ans.push_back(0);
            }
            return ans;
        }

        long long all = 1;
        for(int i = 0;i < nums.size(); i++){
            all *= nums[i];
        }
        
        for(int i = 0;i<nums.size();i++){
            ans.push_back(all / nums[i]);
        }

        return ans;
    }
};
