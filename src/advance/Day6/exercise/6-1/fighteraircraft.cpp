#include "fighteraircraft.h"

FighterAircraft::FighterAircraft() {
    m_type = "戦闘機";
}

string FighterAircraft::getType() {
    return m_type;
}

void FighterAircraft::fly() {
    cout << "攻撃に出るために飛行" << endl;
}

void FighterAircraft::fight() {
    cout << "戦闘します" << endl;
}
