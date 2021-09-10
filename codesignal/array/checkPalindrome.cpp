/*
or inputString = "aabaa", the output should be
checkPalindrome(inputString) = true;
*/
bool checkPalindrome(string s) {
    return s == string(s.rbegin(), s.rend());
}