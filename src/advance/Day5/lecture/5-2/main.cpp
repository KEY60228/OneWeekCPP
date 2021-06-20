#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    set<string> names;
    names.insert("Tom");
    names.insert("Mike");
    names.insert("Mike");
    names.insert("Bob");

    set<string>::iterator itr;
    for (itr = names.begin(); itr != names.end(); itr++) {
        cout << *itr << endl;
    }

    string n[] = {"Bob", "Steve"};
    for (int i = 0; i < 2; i++) {
        itr = names.find(n[i]);
        if (itr == names.end()) {
            cout << n[i] << " is not in a set." << endl;
        } else {
            cout << n[i] << " is in a set."  << endl;
        }
    }

    return 0;
}
