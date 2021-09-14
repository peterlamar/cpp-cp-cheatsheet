/*
matrix = [[true, false, false],
          [false, true, false],
          [false, false, false]]
the output should be

minesweeper(matrix) = [[1, 2, 1],
                       [2, 1, 1],
                       [1, 1, 1]]
*/
void updateNeighbors(vector<vector<int>> &rtn, int R, int C){
    int MR = rtn.size();
    int MC = rtn[0].size();
    
    for (int r = -1; r < 2; r++){
        for (int c=-1; c < 2; c++){
            if (R+r < 0 || R+r >= MR){
                continue;
            }
            if (C+c < 0 || C+c >= MC){
                continue;
            }
            if (c == 0 && r==0){
                continue;
            }
            rtn[R+r][C+c] += 1;
        }
    }
}

// For each mine, +1 all those around. Unless its true, then
vector<vector<int>> minesweeper(vector<vector<bool>> matrix) {
    const int R = matrix.size();
    const int C = matrix[0].size();
    vector<vector<int>> rtn(R, vector<int>(C));
    
    for (int r = 0; r<R; r++){
        for (int c = 0; c < C; c++){
            if (matrix[r][c]){
                updateNeighbors(rtn, r, c);
            }
        }
    }    
    
    return rtn;
}
