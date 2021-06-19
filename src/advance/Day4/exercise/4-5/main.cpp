#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;
    int n;

    while (true) {
        cout << "正の整数を入力: ";
        cin >> n;
        if (n == -1) {
            break;
        }
        l.push_back(n);
    }

    l.remove(2);
    for (list<int>::iterator itr = l.begin(); itr != l.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
