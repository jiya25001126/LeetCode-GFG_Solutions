class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        int st = 0, e = n - 1;
        while (st <= e) {
            int mid = st + (e - st) / 2;
            if (mid == 0 && nums[0] != nums[1])
                return nums[mid];
            if (mid == n - 1 && nums[n - 1] != nums[n - 2])
                return nums[mid];
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
                return nums[mid];
            if (mid % 2 == 0) {
                if (nums[mid - 1] == nums[mid]) {
                    e = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (nums[mid - 1] == nums[mid]) {
                    st = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }
        return -1;
    } 
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna