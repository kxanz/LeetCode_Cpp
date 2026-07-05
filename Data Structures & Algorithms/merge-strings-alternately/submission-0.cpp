class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string res = "";
        int i {0}, k {0};
        int len1 = word1.size();
        int len2 = word2.size();

        while (i < len1 || k < len2) {
            if (i < len1) {
                res += word1[i];
                i++;
            }
            if (k < len2) {
                res += word2[k];
                k++;
            }
        }
        return res;
    }
};