class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1) return false;
        int divSum=1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                divSum += i;
                if(i*i != num){
                    divSum += num/i;
                }
            }
        }
        return divSum==num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna