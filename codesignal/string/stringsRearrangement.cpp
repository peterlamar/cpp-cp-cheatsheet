/*
For inputArray = ["aba", "bbb", "bab"], the output should be
stringsRearrangement(inputArray) = false.

There are 6 possible arrangements for these strings:

["aba", "bbb", "bab"]
["aba", "bab", "bbb"]
["bbb", "aba", "bab"]
["bbb", "bab", "aba"]
["bab", "bbb", "aba"]
["bab", "aba", "bbb"]
*/

bool check (vector<string> &nums){

    for (int i=0; i<nums.size()-1; i++){
        int cnt = 0;

        for (int j=0; j<nums[i].size(); j++){
            if (nums[i][j] != nums[i+1][j]){
                cnt += 1;
            }
        }
        if (cnt != 1){
            return false;
        }
    }
    
    return true;
}


bool stringsRearrangement(vector<string> inputArray) {
    std::sort(inputArray.begin(), inputArray.end());
    do{        
        if (check(inputArray)){
            return true;
        }
    }
    while (next_permutation(inputArray.begin(), inputArray.end()));
    
    return false;
}
