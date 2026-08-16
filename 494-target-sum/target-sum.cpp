class Solution {
public:
    int solve(vector<int>& nums, int index, int sum, int target) {
        if (index == nums.size()) {
            return sum == target ? 1 : 0;
        }
        int add = solve(nums, index + 1, sum + nums[index], target);
        int subtract = solve(nums, index + 1, sum - nums[index], target);

        return add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums, 0, 0, target);
    }
};