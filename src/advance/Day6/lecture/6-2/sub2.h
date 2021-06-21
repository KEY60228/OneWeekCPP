#ifndef _SUB2_H_
#define _SUB2_H_

#include "sub2.h"
#include <iostream>

using namespace std;

class CSub2: public CSup2 {
    public:
        CSub2() {
            cout << "CSub2のコンストラクタ" << endl;
        }
        ~CSub2() {
            cout << "CSub2のデストラクタ" << endl;
        }
};

#endif