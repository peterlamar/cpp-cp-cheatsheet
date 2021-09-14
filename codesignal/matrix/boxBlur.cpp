int getBlur(vector<vector<int>> image, int R, int C){
    int rtn = 0;
    for (int r = -1; r<2; r++){
        for (int c = -1; c<2; c++){
            rtn += image[R+r][C+c];
        }        
    }
    return rtn/9;
}

vector<vector<int>> boxBlur(vector<vector<int>> image) {
    vector<vector<int>> rtn;
    
    int R = image.size();
    int C = image[0].size();
    
    // loop through candidates
    // Call function to calc blur, add blur to rtn
    for (int i=1; i<R-1; i++){
        vector<int> tmp;
        for (int j=1; j<C-1; j++){
            int blur = getBlur(image, i, j);
            tmp.push_back((blur));
        }
        rtn.push_back(tmp);
    }
    
    return rtn;
}
