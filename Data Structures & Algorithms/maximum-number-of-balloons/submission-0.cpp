class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count[26] = {};

        for (char c : text) {
            count[c - 'a']++;
        }

        return min({
            count['b' - 'a'],
            count['a' - 'a'],
            count['l' - 'a'] / 2,
            count['o' - 'a'] / 2,
            count['n' - 'a']
        });
    }
};

//Input 
/*
The input is the string text which is a random string with random char 
*/
// What DS.ALGO.TECH
/*
unordered hashmap
*/
//What do we do with the data
/*
We will iterate through the string to see if the characters fill in the string balloon
*/
//Output
/*
A interger signiling how many strings (balloon) appears in the string (text)
*/

