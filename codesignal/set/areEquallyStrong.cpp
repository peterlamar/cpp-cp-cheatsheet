/*
For yourLeft = 10, yourRight = 15, friendsLeft = 15, and friendsRight = 10, the output should be
areEquallyStrong(yourLeft, yourRight, friendsLeft, friendsRight) = true;
*/
bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    return unordered_set<int> {yourLeft, yourRight} == unordered_set<int> {friendsLeft, friendsRight};
}

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    return minmax(yourLeft, yourRight) == minmax(friendsLeft, friendsRight);
}
