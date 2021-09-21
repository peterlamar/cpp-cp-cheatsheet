/*
Given a string, output its longest prefix which contains only digits.
For inputString = "123aa1", the output should be
longestDigitsPrefix(inputString) = "123".
*/

string longestDigitsPrefix(string inputString) {
    return inputString.substr(0, inputString.find_first_not_of("0123456789"));
}

string longestDigitsPrefix(string inputString) {
    string rtn;
    for (auto c: inputString){
        if (isdigit(c)){
            rtn += c;
        }
        else{
            break;
        }
    }
    return rtn;
}
