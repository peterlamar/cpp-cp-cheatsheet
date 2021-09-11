/*
picture = ["abc",
           "ded"]
the output should be

addBorder(picture) = ["*****",
                      "*abc*",
                      "*ded*",
                      "*****"]
*/
vector<string> addBorder(vector<string> picture) {
    vector<string> rtn;
    
    rtn.push_back(string(picture[0].size()+2, '*'));
    
    for (const auto& p:picture){
        rtn.push_back("*"+p+"*");
    }
    
    rtn.push_back(string(picture[0].size()+2, '*'));

    return rtn;
}
