#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

class FighterAircraft: public Airplane {
    private:
        string m_type;
    public:
        FighterAircraft();
        string getType();
        void fly();
        void fight();
};

#endif