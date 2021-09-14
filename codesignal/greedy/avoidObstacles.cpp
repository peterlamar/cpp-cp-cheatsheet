/*
For inputArray = [5, 3, 6, 7, 9], the output should be
avoidObstacles(inputArray) = 4.
*/
int avoidObstacles(vector<int> inputArray) {
        
    int jump = 1;
    bool obs = true;
    
    while(obs){
        obs=false;
        jump += 1;
        for (const int &i:inputArray){
            if (i%jump==0){
                obs = true;
                break;
            }
        }
    }
    
    return jump;
}
