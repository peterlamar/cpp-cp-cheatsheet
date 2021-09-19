/*
BF, n^2
Start at half-1, 

   1, 5,  6, 7,   100
1. 0  4   5, 6,   99.  114
5  4  0   1, 2,   95   102
6  5  1.  0  1.   94.  101  
7  6  2.  1. 0.   93.  102
100 99 95 990 194

for x = 2, the value will be 
abs(2 - 2) + abs(4 - 2) + abs(7 - 2) = 7.
*/
int absoluteValuesSumMinimization(vector<int> a) {
    return a[(a.size()-1)/2];
}
