/*
For cell = "a1", the output should be
chessKnight(cell) = 2.
For cell = "c2", the output should be
chessKnight(cell) = 6.
*/
bool valid (int r, int c){
    return 0 <= r && r <8 && 0 <= c && c < 8;
}

int chessKnight(string cell) {
    int rtn = 0;
    for (int dr =-2; dr<3; dr++){
        for (int dc=-2; dc<3; dc++){
            if (abs(dr)+abs(dc) == 3){
                int r = cell[0] - int('a') + dr;
                int c = cell[1] - int('1') + dc;
                rtn += valid(r,c);
            }
        }
    }
    return rtn;
}
