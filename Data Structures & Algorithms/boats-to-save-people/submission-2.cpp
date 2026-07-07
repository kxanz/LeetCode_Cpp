class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        std::sort(people.begin(), people.end());

        int res { 0 };
        int first { 0 };
        int last { static_cast<int>(people.size()) - 1 };

        while (first <= last)
        {
            if (people[first] + people[last] <= limit)
            {
                first++;   // lightest person rides along
            }
            last--;        // heaviest person always leaves, either way
            res++;         // one boat used this iteration, no matter which case
        }
        
        return res;
    }
};