/*
For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190].
*/
vector<int> sortByHeight(vector<int> a) {
    vector<int> tmp;
    
    for (const int& i:a){
        if (i != -1)
            tmp.push_back(i);
    }
    sort(tmp.begin(),tmp.end());
    
    for (int i=0, j=0; i<a.size(); i++){
        if (a[i]!=-1){
            a[i] = tmp[j];
            j += 1;
        }
    }
    
    return a;
}
