class Solution {
  public:
    int digitalRoot(int n) {
        // code here
        if(n<10){
            return n;
        }
        int sum=0;
        while(n!=0){
            int dig = n%10;
            sum += dig;
            n /= 10;
        }
        return digitalRoot(sum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna