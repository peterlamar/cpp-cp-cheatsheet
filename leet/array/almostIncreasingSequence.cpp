/*
For sequence = [1, 3, 2, 1], the output should be
almostIncreasingSequence(sequence) = false.
*/
bool almostIncreasingSequence(vector<int> sequence) {
    int count = 0;
    for (int i=1; i < sequence.size(); i++){
        if(sequence[i] <= sequence[i-1]) {            
            count++;
            if ((i>1)&&(i+1 < sequence.size()) && (sequence[i]<=sequence[i-2]) && (sequence[i+1]<=sequence[i-1])){
                return false;
            }
        }
    }
    return count == 1;
}
