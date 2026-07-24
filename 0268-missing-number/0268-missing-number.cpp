class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expSum = n*(n+1) / 2;
        int actSum = 0;
        for(int val : nums){
            actSum += val;
        }
        return expSum - actSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna