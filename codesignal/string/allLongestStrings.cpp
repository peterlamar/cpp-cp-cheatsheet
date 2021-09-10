/*
For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/

vector<string> allLongestStrings(vector<string> inputArray) {
    vector<string> rtn;
    for (const auto& i:inputArray){
        if (rtn.empty() || i.size()==rtn[0].size()){
            rtn.push_back(i);
        } else if (i.size() > rtn[0].size()){
            rtn = vector<string>{i};
        }
    }
    return rtn;
}


bool myfn(const string& a, const string& b){return a.size() < b.size();}

vector<string> allLongestStrings(vector<string> inputArray) {
    vector<string> rtn;
    
    auto tmp = max_element(inputArray.begin(), inputArray.end(), myfn);
    int maxSize = tmp->size();
    
    for (const auto &i: inputArray){
        if (i.size() == maxSize)
            rtn.push_back(i);
    }

    return rtn;
}

vector<string> allLongestStrings(vector<string> inputArray) {
    vector<string> rtn;
    
    auto tmp = max_element(inputArray.begin(), inputArray.end(), 
        [](const string& a, const string& b){return a.size() < b.size();});
    int maxSize = tmp->size();
    
    for (const auto &i: inputArray){
        if (i.size() == maxSize)
            rtn.push_back(i);
    }

    return rtn;
}