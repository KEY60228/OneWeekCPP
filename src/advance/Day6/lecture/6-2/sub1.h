#ifndef _SUB1_H_
#define _SUB1_H_

#include "sup1.h"
#include <iostream>

using namespace std;

class CSub1: public CSup1 {
    public:
        CSub1() {
            cout << "CSub1のコンストラクタ" << endl;
        }
        ~CSub1() {
            cout << "CSub1のデストラクタ" << endl;
        }
};

#endif