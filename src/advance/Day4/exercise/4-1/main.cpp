#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int n;

    while (n != -1) {
        cin >> n;
        v.push_back(n);
    }

    cout << "偶数: ";
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    cout << "奇数: ";
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 != 0) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
