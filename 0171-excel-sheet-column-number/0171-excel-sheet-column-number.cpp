class Solution {
public:
    int titleToNumber(string columnTitle) {

        int ans = 0;

        for (char ch : columnTitle) {

            int value = ch - 'A' + 1;

            ans = ans * 26 + value;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna