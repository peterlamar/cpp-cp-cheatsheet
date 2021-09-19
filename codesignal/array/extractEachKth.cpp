/*
For inputArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] and k = 3, the output should be
extractEachKth(inputArray, k) = [1, 2, 4, 5, 7, 8, 10].
*/

vector<int> extractEachKth(vector<int> inputArray, int k) {
    for (int x = k*(inputArray.size()/k)-1; x >= 0; x -=k){
        inputArray.erase(inputArray.begin()+x);
    }
    return inputArray;
}


vector<int> extractEachKth(vector<int> inputArray, int k) {
    vector<int> rtn;
    for (int i=0; i<inputArray.size(); i++){
        if ((i+1)%k != 0){
            rtn.push_back(inputArray[i]);
        }
    }
    return rtn;
}
