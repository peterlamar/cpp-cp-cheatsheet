/*
For n = 10 and firstNumber = 2, the output should be
circleOfNumbers(n, firstNumber) = 7.
*/
int circleOfNumbers(int n, int firstNumber) {
    return (firstNumber + n/2)%n;
}
