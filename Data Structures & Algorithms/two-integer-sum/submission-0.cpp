class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nums_map;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int complement = target - nums[i];
            if(nums_map.count(complement)){
                return {nums_map[complement], i};
            }
            nums_map[nums[i]] = i;
        }
        return {};
    }
};
