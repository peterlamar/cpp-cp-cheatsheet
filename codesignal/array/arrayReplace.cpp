vector<int> arrayReplace(vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for (auto &i:inputArray){
        if (i == elemToReplace){
            i = substitutionElem;
        }
    }
    return inputArray;
}

vector<int> arrayReplace(vector<int> inputArray, int elemToReplace, int substitutionElem) {
    
    std::replace(inputArray.begin(), inputArray.end(), elemToReplace, substitutionElem);
    
    return inputArray;
}