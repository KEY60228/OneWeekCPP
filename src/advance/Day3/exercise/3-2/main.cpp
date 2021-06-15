#include <iostream>
#include "collection.h"

using namespace std;

int main() {
    int array[] = { 1, 5, 4, 2, 3};
    Collection<int>* c = new Collection<int>(array, 5);
    c->showArray();
    cout << "最大値: " << c->getMax() << endl;
    cout << "最小値: " << c->getMin() << endl;

    double array2[] = {1.2, 3.5, 8.1, 4.9, 2.0, 2.2};
    Collection<double>* c2 = new Collection<double>(array2, 6);
    c2->showArray();
    cout << "最大値: " << c2->getMax() << endl;
    cout << "最小値: " << c2->getMin() << endl;

    delete c;
    delete c2;

    return 0;
}
