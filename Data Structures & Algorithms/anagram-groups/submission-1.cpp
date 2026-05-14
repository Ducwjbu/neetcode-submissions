class Solution {
public:
    bool isAnagram(string s, string t){
            if(s.length() != t.length()) return false;
            map<char, int> mp;
            for(int i = 0;i<s.length();i++){
                mp[s[i]]++;
                mp[t[i]]--;
            }

            for(auto x : mp){
                if(x.second != 0) return false;
            }
            return true;
        }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> kq;
        bool a[1000] = {false};
        int len = strs.size();
        for(int i = 0;i<len;i++){
            if(a[i] == true) continue;
            a[i] = true;
            vector<string> v;
            v.push_back(strs[i]);
            for(int j = i + 1;j<len;j++){
                if(isAnagram(strs[i], strs[j])){
                    a[j] = true;
                    v.push_back(strs[j]);
                }
            }
            kq.push_back(v);
            v.clear();
        }
        return kq;
    }
};
