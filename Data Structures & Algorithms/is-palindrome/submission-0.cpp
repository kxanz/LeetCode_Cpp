class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int k = s.length() - 1;

        while (i < k) {
            //is the character not an alphabethical 
            if (!isalnum(s[i])){
                i++;
                continue;
            }
            if (!isalnum(s[k])){
                k--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[k])) {
               return false;
            }
            else {
                i++;
                k--;
            }
        }
        return true;
    }
};
