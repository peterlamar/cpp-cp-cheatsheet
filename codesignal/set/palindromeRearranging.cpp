/*
For inputString = "aabb", the output should be
palindromeRearranging(inputString) = true.
*/
bool palindromeRearranging(string inputString) {
    unordered_set<char> set;
    for (char c: inputString){
        // if char not found
        if (set.find(c) == set.end()){
            set.insert(c);
        } else {
            set.erase(c);
        }
    }
    return set.size() <= 1;
}
