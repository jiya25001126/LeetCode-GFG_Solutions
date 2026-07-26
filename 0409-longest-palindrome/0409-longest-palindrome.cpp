class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;

        for (char c : s)
            mp[c]++;

        int ans = 0;
        bool odd = false;

        for (auto it : mp) {
            if (it.second % 2 == 0)
                ans += it.second;
            else {
                ans += it.second - 1;
                odd = true;
            }
        }

        if (odd)
            ans++;

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna