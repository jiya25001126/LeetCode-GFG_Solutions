class Solution {
public:
    string convertToBase7(int num) {
       if(num==0) return "0";
       string res = "";
       bool isNegative=num<0;
       while(num!=0){
            int rem=num%7;
            if(rem<0){
                rem =-rem;
            }
            char digitChar = '0' + rem;
            res = digitChar + res;
            num /= 7;
       }
       if(isNegative){
            res = '-' + res;
       }
       return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna