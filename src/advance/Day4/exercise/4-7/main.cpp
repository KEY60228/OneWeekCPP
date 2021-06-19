#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> l;
    string s;

    while (true) {
        cout << "文字列を入力: ";
        getline(cin, s);
        if (s.length() == 0) {
            break;
        }
        l.push_back(s);
    }

    list<string>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++) {
        if ((*itr).length() >= 5) {
            itr = l.erase(itr);
            itr--;
        }
    }

    cout << "5文字未満の単語: ";
    for (itr = l.begin(); itr != l.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
