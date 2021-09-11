/*
For a = [1, 2, 3] and b = [1, 2, 3], the output should be
areSimilar(a, b) = true.
*/
bool areSimilar(vector<int> a, vector<int> b) {
    
    if (a==b)
        return true;
    
    auto afirst = std::mismatch(a.begin(), a.end(), b.begin()).first;
    auto aSecond = std::mismatch(a.rbegin(), a.rend(), b.rbegin()).first;
    
    iter_swap(afirst, aSecond);
    
    return a == b;
}
