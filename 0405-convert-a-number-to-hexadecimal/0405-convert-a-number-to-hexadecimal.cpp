class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        string hexChars = "0123456789abcdef";
        string res = "";
        unsigned int n = num;
        while(n>0){
            int current = n&15;
            res = hexChars[current]+res;
            n>>=4;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna