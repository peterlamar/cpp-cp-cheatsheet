/*
Let's define digit degree of some positive integer as the number of times we need to replace this number with the sum of its digits until we get to a one digit number.

For n = 91, the output should be
digitDegree(n) = 2.
9 + 1 = 10 -> 1 + 0 = 1.
*/
int digitDegree(int n) {
    int rtn = 0;
    
    while (n >= 10){
        int tot=0;
        string s = to_string(n);
        for (char &c: s){
            tot += c - '0';      
        }
        rtn += 1;
        n = tot;
    }

    return rtn;
}

int digitDegree(int n) {
    int rtn = 0;
    
    while (n >= 10){
        int tot=0;
        while (n){
            tot += n%10;
            n /= 10;
        }
        rtn += 1;
        n = tot;
    }

    return rtn;
}