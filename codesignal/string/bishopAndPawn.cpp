/*
For bishop = "a1" and pawn = "c3", the output should be
bishopAndPawn(bishop, pawn) = true.
*/
bool bishopAndPawn(string bishop, string pawn) {
    return abs(bishop[0]-pawn[0])==abs(bishop[1]-pawn[1]);
}

bool bishopAndPawn(string bishop, string pawn) {
    for (int i=1; i < 8; i++){
        if (pawn == string{char(bishop[0]+i), char(bishop[1]+i)}){
            return true;
        }
        if (pawn == string{char(bishop[0]-i), char(bishop[1]+i)}){
            return true;
        }
        if (pawn == string{char(bishop[0]+i), char(bishop[1]-i)}){
            return true;
        }
        if (pawn == string{char(bishop[0]-i), char(bishop[1]-i)}){
            return true;
        }
    }
    return false;
}
