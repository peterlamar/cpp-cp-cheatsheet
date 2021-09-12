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


bool areSimilar(vector<int> a, vector<int> b) {
    unordered_set<int> sa;
    unordered_set<int> sb;
    
    if (a == b)
        return true;
    
    int cnt = 0;
    for (int i=0; i < a.size(); i++){
        if (a[i] != b[i]){
            cnt += 1;
            sa.insert(b[i]);
            sb.insert(a[i]);
        }
    }
    
    if (cnt == 2 && sa==sb)
        return true;

    return false;
}
