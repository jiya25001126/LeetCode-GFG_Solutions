class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();

        long long expectedSum = 1LL * (n - 1) * n / 2;
        long long actualSum = 0;

        for (int num : arr) {
            actualSum += num;
        }

        return actualSum - expectedSum;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna