class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto x : strs){
            ans += to_string(x.length());
            ans += '#';
            ans += x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int i = 0;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, len);
            v.push_back(str);
            i = j + len + 1;
        }

        return v;
    }    
};
