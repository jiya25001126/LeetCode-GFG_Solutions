class Solution {
public:
    int arrangeCoins(int n) {
        long left=0;
        long right=n;
        while(left<=right){
            long mid = left + (right-left)/2;
            long used = mid*(mid+1)/2;
            if(used==n){
                return mid;
            } 
            else if(used<n){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return right;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna