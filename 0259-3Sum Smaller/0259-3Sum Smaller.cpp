class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        if (nums.size() <= 2) {
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size() - 2; ++i) {
            int start = i + 1, end = nums.size() - 1;
            int t = target - nums[i];
            while (start < end) {
                int sum = nums[start] + nums[end];
                if (sum < t) {
                    count += end - start;
                    ++start;
                }
                else {
                    --end;
                }
            }
        }
        
        return count;
    }
};
