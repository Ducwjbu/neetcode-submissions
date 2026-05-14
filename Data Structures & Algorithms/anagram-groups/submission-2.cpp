class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> kq;
        map<vector<int>,vector<string>> mp;

        for(int i = 0;i < strs.size();i++){
            vector<int> cnt(26, 0);;
            for(auto x : strs[i]){
                cnt[int(x) - int('a')]++;
            }
            mp[cnt].push_back(strs[i]);
        }

        for(auto x : mp){
            kq.push_back(x.second);
        }
        return kq;

    }
};
