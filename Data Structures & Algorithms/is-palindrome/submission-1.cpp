class Solution {
public:
    bool isPalindrome(string s) {
        string pal = "";
        for(int i = 0;i<s.length();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                pal += tolower(s[i]);
            }
        }
        int len = pal.length();
        int i = 0;
        int j = len - 1;
        while(i < j){
            if(pal[i] != pal[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
