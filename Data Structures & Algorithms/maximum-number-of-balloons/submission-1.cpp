class Solution {
public:
    int maxNumberOfBalloons(string text) {
         unordered_map<char, int> count;

        for (char c : text) {
            count[c]++;
        }

        return min({
            count['b'],
            count['a'],
            count['l'] / 2,
            count['o'] / 2,
            count['n']
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

