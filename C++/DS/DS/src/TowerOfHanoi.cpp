#include <iostream>
#include "FunctionHeader.h"

using namespace std;
using namespace DS;

void DS::towerOfHanoi(int lenSrc, char srcTower, char destTower, char auxTower) {
    
    // Base cases when length is 0 or 1
    if (lenSrc == 0) {
        return;
    }
    else if (lenSrc == 1) {
        cout << "Moved " << lenSrc << " from " << srcTower << " to " << destTower << endl;
        return;
    }

    towerOfHanoi(lenSrc - 1, srcTower, auxTower, destTower);
    cout << "Moved " << lenSrc << " from " << srcTower <<" to "  << destTower << endl;
    towerOfHanoi(lenSrc - 1, auxTower, destTower, srcTower);
}