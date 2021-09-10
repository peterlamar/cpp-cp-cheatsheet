/*
matrix = [[0, 1, 1, 2], 
          [0, 5, 0, 0], 
          [2, 0, 3, 3]]
the output should be
matrixElementsSum(matrix) = 9.
*/
int matrixElementsSum(vector<vector<int>> matrix) {
    int R = matrix.size();
    int C = matrix[0].size();
    int rtn = 0;
    for (int c=0; c < C; c++){
        for (int r=0; r<R; r++){
            if (matrix[r][c] == 0){
                break;
            }else{
                rtn += matrix[r][c] ;
            }
        }
    }    
    return rtn;
}
