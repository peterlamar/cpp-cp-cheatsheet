/*
For inputString = "00-1B-63-84-45-E6", the output should be
isMAC48Address(inputString) = true;
For inputString = "Z1-1B-63-84-45-E6", the output should be
isMAC48Address(inputString) = false;
*/

vector<string> split(string s, char c){
    vector<string> parts;
    string part;
    istringstream in(s);
    while (getline(in, part, c)) {
        parts.push_back(part);
    }
    return parts;
}

bool isMAC48Address(string inputString) {
    vector<string> parts = split(inputString, '-');
    
    if (inputString[0] == '-' || inputString[inputString.size()-1] == '-')
        return false;

    if (parts.size() != 6){
        return false;
    }
    
    for (string p: parts){
        if (p.size() != 2){
            return false;
        }
        for (char c: p){
            if (!(isdigit(c) || ('A' <= c && c <= 'F'))){
                return false;
            }
        }
    }
    
    return true;
}
