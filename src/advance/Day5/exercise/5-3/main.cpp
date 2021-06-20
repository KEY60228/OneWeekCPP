#include <iostream>
#include <set>
#include <random>

using namespace std;

int main() {
    random_device rnd;
    set<int> s;

    cout << "乱数: ";
    for (int i = 0; i < 10; i++) {
        int n = rnd() % 10;
        cout << n << " ";
        s.insert(n);
    }
    cout << endl;

    cout << "出現した数: ";
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
