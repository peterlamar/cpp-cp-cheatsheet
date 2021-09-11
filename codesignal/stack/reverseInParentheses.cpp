/*
For inputString = "(bar)", the output should be
reverseInParentheses(inputString) = "rab";
*/
string reverseInParentheses(string inputString) {
    string rtn;
    vector<int> stk;
    for (const char& c: inputString){
        if (c == '('){
            stk.push_back(rtn.length());
        }
        else if (c == ')'){
            int j = stk.back();
            stk.pop_back();
            reverse(rtn.begin()+j, rtn.end());
        } else {
            rtn += c;
        }
    }
    return rtn;
}
