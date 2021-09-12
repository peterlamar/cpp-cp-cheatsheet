/*
For inputString = "172.16.254.1", the output should be
isIPv4Address(inputString) = true;
*/
vector<string> split(string s, char c) {
    vector<string> parts;
    string part;
    istringstream in(s);
    while (getline(in, part, c)) {
        parts.push_back(part);
    }
    return parts;
}

bool isIPv4Address(string inputString) {
    
    vector<string> parts = split(inputString, '.');
    
    if (parts.size() != 4){
        return false;
    }
    
    for (string p: parts){
        
        if (p.size() == 0 || p.size()> 3 || (p.size()>1 && p[0]=='0'))
            return false;
        
        for (char c: p){
            if (!isdigit(c))
                return false;
        }

        if (stoi(p) > 255 )
            return false;            
    }
    
    return true;
}
