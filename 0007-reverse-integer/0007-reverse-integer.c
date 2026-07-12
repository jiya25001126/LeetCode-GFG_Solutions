#include<limits.h>
int reverse(int x){
    int temp = x;
    int dig;
    int rev=0;

    while(temp!=0){
        dig = temp%10;
        if(rev> INT_MAX/10 || rev< INT_MIN/10){
            return 0;
        }
        rev = rev*10 + dig;
        temp /= 10;
    }
    return rev;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna