/*
For inputString = "var_1__Int", the output should be
firstDigit(inputString) = '1';
*/
char firstDigit(string inputString) {
    for (char &c: inputString){
        if (isdigit(c))
            return c;
    }
    return 'n';
}
