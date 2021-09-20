/*
For value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, and maxW = 8, the output should be
knapsackLight(value1, weight1, value2, weight2, maxW) = 10
*/
int knapsackLight(int v1, int w1, int v2, int w2, int maxW) {
    if (w1 + w2 <= maxW) return v1 + v2;
    if (w1<=maxW && w2<=maxW) return max(v1,v2);
    if (w1<=maxW) return v1;
    if (w2<=maxW) return v2;
    return 0;
}
