/*
Given array of integers, find the maximal possible sum of some of its k consecutive elements.

For inputArray = [2, 3, 5, 1, 6] and k = 2, the output should be
arrayMaxConsecutiveSum(inputArray, k) = 8.
*/
int arrayMaxConsecutiveSum(vector<int> inputArray, int k) {
    int rtn=INT_MIN;
    int tmpSum=0;

    for (int l = 0, r = 0; r < inputArray.size(); r++){
        
        tmpSum += inputArray[r];
        if (r-k >= l){
            tmpSum -= inputArray[l];
            l += 1;
        }
        
        rtn = max(rtn, tmpSum);
    }
    return rtn;
}
