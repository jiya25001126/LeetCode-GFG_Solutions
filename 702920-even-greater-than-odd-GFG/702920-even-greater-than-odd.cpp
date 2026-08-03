class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            if (i % 2 == 1) {
                if (arr[i] < arr[i - 1]) {
                    swap(arr[i], arr[i - 1]);
                }
            } else {
                if (arr[i] > arr[i - 1]) {
                    swap(arr[i], arr[i - 1]);
                }
            }
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna