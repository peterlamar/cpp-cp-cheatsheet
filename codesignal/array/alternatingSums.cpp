/*
For a = [50, 60, 60, 45, 70], the output should be
alternatingSums(a) = [180, 105].
*/
vector<int> alternatingSums(vector<int> a) {
    vector<int> rtn(2);
    for (int i=0; i<a.size(); i++){
        rtn[i%2] += a[i];
    }
    return rtn;
}
