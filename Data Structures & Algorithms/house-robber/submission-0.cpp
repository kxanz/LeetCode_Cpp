class Solution {
public:
    int rob(vector<int>& nums) {
        auto rob1 {0};
        auto rob2 {0};
        
        for (auto n : nums) {
            auto temp = max(n + rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;

    }
};
/* Steps
 1. Edge case if the array is epty return 0 if the array has 1 house well return its value
 3. We will loop through each house from the first 
    i. For each house calculate the max value we can rob y either robbing the current house
    and the one two houses before or not robbing the current house and considering the max amount 
    robbed up to the prev house 
    ii. Update prev 1 and prev 2 
4. Return prev1 as our max amount which can be robbed
*/
    //Input 
//Given an integer of array of nums, representing the amount of money of each house 
    //What DS.ALGO.TECH
//Dynamic Programing
    //What do we do with the data
// We will create two variables one two, to keep track og the max amount of moany that
// can be robbbbed to the current house
    //Output
//Return the maximun amount of money you can rob tonight without alerting police 
