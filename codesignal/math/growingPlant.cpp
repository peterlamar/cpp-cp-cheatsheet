/*
100 + 90*x = y
x = (y-100)/90

For upSpeed = 100, downSpeed = 10, and desiredHeight = 910, the output should be
growingPlant(upSpeed, downSpeed, desiredHeight) = 10.
*/
int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    if (desiredHeight < upSpeed) 
        return 1;
        
    auto [q,r] = div(desiredHeight-upSpeed, upSpeed-downSpeed);
    
    if (r > 0)
        q += 1;
        
    return q+1;
}
