/*
For s = "cabca", the output should be
differentSymbolsNaive(s) = 3.
*/
int differentSymbolsNaive(string s) {
    return set(s.begin(), s.end()).size();
}

int differentSymbolsNaive(string s) {
    set<char> st;
    for (char &c: s){
        st.insert(c);
    }
    return st.size();
}
