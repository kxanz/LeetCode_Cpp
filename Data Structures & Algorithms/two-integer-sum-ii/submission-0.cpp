class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                result[0] = left + 1;
                result[1] = right + 1;
                return result;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return result;
    }
};
//Input 
/*
complement = 2
 1. 2. 3. 4.  
 |  
 |

a vector of numbers, and a target number
*/
// What DS.ALGO.TECH
/*
two pointer
*/
//What do we do with the data
/*
We will add two numbers in the array and see if they add to the target number 
*/
//Output
/*
an array with the two numbers
*/
/*
1. Make two pointers
    i. iterate through each number in the vectory while a pointer sits in idex0 
        we will start with subtracting the first pointer for target, if any
    ii. if the number exactly fits the taget number we skip.

*/