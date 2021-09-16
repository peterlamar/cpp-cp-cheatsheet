/*
For cell1 = "A1" and cell2 = "C3", the output should be
chessBoardCellColor(cell1, cell2) = true.
*/
bool chessBoardCellColor(string cell1, string cell2) {
    int c1 = ((cell1[0] - 'A') + (cell1[1]-'1')) %2;
    int c2 = ((cell2[0] - 'A') + (cell2[1]-'1')) %2;
    return c1 == c2;
}

 
bool chessBoardCellColor(string cell1, string cell2) {
    return (cell1[0]+cell1[1])%2 == (cell2[0]+cell2[1])%2;
}