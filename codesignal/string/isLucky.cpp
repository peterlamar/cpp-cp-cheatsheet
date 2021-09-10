/*
For n = 1230, the output should be
isLucky(n) = true;
*/
bool isLucky(int n) {
    string s = std::to_string(n);
    auto midIter = s.begin() + s.size()/2;
    return accumulate(s.begin(), midIter, 0) == accumulate(midIter, s.end(), 0);
}
