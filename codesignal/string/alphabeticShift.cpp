/*
For inputString = "crazy", the output should be 
alphabeticShift(inputString) = "dsbaz".
*/
string alphabeticShift(string inputString) {
    for (char &c : inputString){
        int idx = (c - 'a'+1)%26;
        c = 'a' + idx;
    }
    return inputString;
}
