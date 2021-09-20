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
