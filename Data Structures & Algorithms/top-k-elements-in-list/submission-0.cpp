class Solution {
    static bool sortPair(pair<int, int> p1, pair<int,int> p2){
        return p1.second > p2.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i <nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), sortPair);

        for(int i = 0; i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
