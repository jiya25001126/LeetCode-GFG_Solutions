class Solution {
public:
    int findComplement(int num) {
        int mask = 1;
        while(mask<num){
            mask = (mask<<1) | 1;
        }
        return mask ^ num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna