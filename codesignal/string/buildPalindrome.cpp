/*
For st = "abcdc", the output should be
buildPalindrome(st) = "abcdcba"

BF
l point, add until palindrome and move right
*/
string buildPalindrome(string st) {

    string rtn(st);
    int i = 0;
    while ( rtn != string(rtn.rbegin(), rtn.rend()) ){
        rtn.insert(st.size(), 1, st[i]);
        i += 1;
    }
    return rtn;
}

string buildPalindrome(string st) {

    string rtn(st);
    auto i = st.begin();
    while ( rtn != string(rtn.rbegin(), rtn.rend()) ){
        rtn.insert(st.size(), 1, *i);
        i += 1;
    }
    return rtn;
}
