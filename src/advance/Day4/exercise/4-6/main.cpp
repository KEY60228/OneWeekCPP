#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;
    int n;

    while (true) {
        cin >> n;

        if (n == -1) {
            break;
        }

        if (l.empty()) {
            l.push_back(n);
            cout << "入力された数: " << n << endl;
            continue;
        }

        list<int>::iterator itr;
        for (itr = l.begin(); itr != l.end(); itr++) {
            if (n > *itr) {
                continue;
            }
            if (n <= *itr) {
                l.insert(itr, n);
                break;
            }
        }
        if (n > *itr) {
            l.push_back(n);
        }

        cout << "入力された数: ";
        for (itr = l.begin(); itr != l.end(); itr++) {
            cout << *itr << " ";
        }
        cout << endl;
    }

    return 0;
}
