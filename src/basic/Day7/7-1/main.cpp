#include "calc.h"
#include <iostream>

using namespace std;

int main() {
    CCalc *pC1, *pC2;
    pC1 = new CCalc();
    pC2 = new CCalc(1, 2);
    cout << 3 << " + " << 4 << " = " << pC1->add(3, 4) << endl;
    cout << pC2->getA() << " + " << pC2->getB() << " = " << pC2->add() << endl;
    delete pC1;
    delete pC2;
}
