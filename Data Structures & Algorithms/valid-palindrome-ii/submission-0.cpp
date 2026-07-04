class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, k = s.size() - 1;

        while (i < k) {
            if (s[i] != s[k]) {
                
                return isPalindrome(s, i + 1, k) || isPalindrome(s, i, k - 1);
            }
            i++;
            k--;
        }
        return true;  
    }

private:
    bool isPalindrome(const string& s, int i, int k) {
        while (i < k) {
            if (s[i] != s[k]) return false;
            i++;
            k--;
        }
        return true;
    }
};