int lengthOfLastWord(char* s) {
    int i=0,len=0;
    while(s[i]!='\0'){
        i++;
    }
    i--;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i]!=' '){
        len++;
        i--;
    }
    return len;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna