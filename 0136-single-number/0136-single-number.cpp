class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int val: nums){
            res ^= val;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna