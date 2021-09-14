/*
For name = "var_1__Int", the output should be
variableName(name) = true;
For name = "qq-q", the output should be
variableName(name) = false;
*/
bool variableName(string name) {
    if (name.size() == 0)
        return false;
    
    if (isdigit(name[0]))
        return false;
    
    for (char &c:name){
        if (!isalnum(c) && c != '_')
            return false;
    }
    
    return true;
}
