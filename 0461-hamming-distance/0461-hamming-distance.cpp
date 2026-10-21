class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=x^y;
        int distance=0;
        while(res>0){
            res &= (res-1);
            distance++;
        }
        return distance;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna