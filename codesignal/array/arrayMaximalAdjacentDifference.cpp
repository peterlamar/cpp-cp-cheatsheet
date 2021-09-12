/*
For inputArray = [2, 4, 1, 0], the output should be
arrayMaximalAdjacentDifference(inputArray) = 3
*/
int arrayMaximalAdjacentDifference(vector<int> inputArray) {
    int rtn = 0;
    
    for (int i=1; i<inputArray.size(); i++){
        rtn = max(rtn, abs(inputArray[i-1]-inputArray[i]));
    }

    return rtn;
}
