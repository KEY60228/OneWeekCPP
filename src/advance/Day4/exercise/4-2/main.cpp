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

    for (int i = 0; i < v.size(); i++) {
        if (max < v[i]) {
            max = v[i];
        }
        if (min > v[i]) {
            min = v[i];
        }
    }

    cout << "最大値: " << max << endl;
    cout << "最小値: " << min << endl;

    return 0;
}
