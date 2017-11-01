#include "die.h"
#include <iomanip>
int die::roll(){
    int curSides = getNumsides();
    int ans = rand() % curSides + 1;
    return ans;
}

int die::getValue(){
    return 0;
}

int die::getNumsides(){
    return sides;
}

void die::setSides(int newSides){
    sides = newSides;
}
