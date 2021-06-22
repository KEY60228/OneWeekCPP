#include <iostream>
#include "fighteraircraft.h"
#include "passengerplane.h"

using namespace std;

int main() {
    FighterAircraft* fighter = new FighterAircraft();
    PassengerPlane* airlinear = new PassengerPlane();
    fighter->fly();
    fighter->fight();
    airlinear->fly();
    airlinear->carryPassengers();
    delete fighter;
    delete airlinear;
    return 0;
}
