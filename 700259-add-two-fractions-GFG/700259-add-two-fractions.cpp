/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2, int den2) {
    // Your code here
    int num = num1 * den2 + num2 * den1;
    int den = den1 * den2;

    int a = num, b = den;
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << num / a << "/" << den / a << endl;
    
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna