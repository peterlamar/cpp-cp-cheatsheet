/*
First, the string is divided into the least possible number of disjoint substrings consisting of identical characters
for example, "aabbbc" is divided into ["aa", "bbb", "c"]
For s = "aabbbc", the output should be
lineEncoding(s) = "2a3bc".
*/
string lineEncoding(string s) {
    string rtn;

    for (int i=0; i<s.length(); i++){
        int cnt = 1;
        while (i<s.length() && s[i] == s[i+1]){
            cnt += 1;
            i += 1;
        }
        if (cnt > 1)
            rtn += to_string(cnt);

        rtn += s[i];
    }
    
    return rtn;
}
