/*
For inputArray = [1, 1, 1], the output should be
arrayChange(inputArray) = 3.
*/
int arrayChange(vector<int> inputArray) {
    int rtn = 0;
    for (int i=0; i<inputArray.size()-1; i++){
        if (inputArray[i] >= inputArray[i+1] ){
            int diff = inputArray[i] - inputArray[i+1] + 1;
            rtn += diff;
            inputArray[i+1] += diff;
        }
    }
    
    return rtn;
}
