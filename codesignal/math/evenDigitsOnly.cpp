/*
For n = 248622, the output should be
evenDigitsOnly(n) = true;
For n = 642386, the output should be
evenDigitsOnly(n) = false.
*/
bool evenDigitsOnly(int n) {
    while (n > 0){
        if (n%2)
            return false;
        n /= 10;
    }
    return true;
}
