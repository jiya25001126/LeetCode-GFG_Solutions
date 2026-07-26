class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int len = 1; len<=n/2;len++){
            if(n%len != 0) continue;
            string sub = s.substr(0, len);
            string temp="";
            while(temp.size()<n){
                temp += sub;
            }
            if(temp==s) return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna