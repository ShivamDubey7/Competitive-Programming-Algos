
// 3 SUM Solution


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int N = nums.size();
        vector<vector<int>> result;
        if (N < 2) {
            result;
        }
        sort(begin(nums), end(nums));
        for (int i = 0; i < N - 2 && nums[i] <= 0; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int j = i + 1;
            int k = N - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    result.push_back({nums[i], nums[j], nums[k]});
                    k--;
                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                    j++;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
            }
        }
        return result;
    }
};
