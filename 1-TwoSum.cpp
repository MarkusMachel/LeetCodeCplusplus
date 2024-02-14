#include <vector>
#include <unordered_map>
using namespace std;

class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0;  i < nums.size(); i++) {
            map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end() && map[complement] != i) {
                return {i, map[complement]};
            }
        }

        return {};
    }
};