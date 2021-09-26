/*
For votes = [2, 3, 5, 2] and k = 3, the output should be
electionsWinners(votes, k) = 2.
*/
int electionsWinners(vector<int> votes, int k) {
    auto mx = max_element(votes.begin(), votes.end());
    int rtn = 0;
    
    // if no more votes
    if (k == 0){
        if (count(votes.begin(), votes.end(), *mx) == 1)
            return 1;
        else
            return 0;
    }
    
    for (int &v: votes){
        if (v+k > *mx && k > 0)
            rtn += 1;
    }
    
    return rtn;
}
