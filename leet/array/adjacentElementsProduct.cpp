/*
For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.
*/
int adjacentElementsProduct(vector<int> inputArray) {
    int rtn=INT_MIN;
    for (int i = 1; i < inputArray.size(); i++){
        rtn = std::max(rtn, inputArray[i-1]*inputArray[i]);
    }
    return rtn;
}
