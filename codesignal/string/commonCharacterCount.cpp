/*
For s1 = "aabcc" and s2 = "adcaa", the output should be
commonCharacterCount(s1, s2) = 3.
*/
int commonCharacterCount(string s1, string s2) {
    int count1[26] = {0};
    int count2[26] = {0};
    int rtn = 0;

    for (char c:s1) count1[c-'a'] += 1;
    for (char c:s2) count2[c-'a'] += 1;

    for (int i=0; i<26; i++){
        rtn += min(count1[i],count2[i]);
    }
    
    return rtn;
}
