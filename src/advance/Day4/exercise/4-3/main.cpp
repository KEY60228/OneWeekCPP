#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int n, min, max;

    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        v.push_back(n);
    }
    min = v[0];
    max = v[0];

    for (int i = 0; i < 10; i++) {
        int j = 0;
        cout << "一の位が" << i << ": ";
        for (int k = 0; k < v.size(); k++) {
            if (v[k] % 10 == i) {
                cout << v[k] << " ";
                j = 1;
            }
            if (v[k] > max) {
                max = v[k];
            }
            if (v[k] < min) {
                min = v[k];
            }
        }
        if (j == 0) {
            cout << "なし";
        }
        cout << endl;
    }

    cout << "最大値: " << max << endl;
    cout << "最小値: " << min << endl;

    return 0;
}
