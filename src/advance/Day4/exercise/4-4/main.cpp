#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> v, max, min;
    string s;

    while (true) {
        getline(cin, s);
        if (s.empty()) {
            break;
        }
        v.push_back(s);
    }
    max.push_back(v[0]);
    min.push_back(v[0]);

    for (int i = 1; i < v.size(); i++) {
        if (max[0].length() < v[i].length()) {
            max.clear();
            max.push_back(v[i]);
        } else if (max[0].length() == v[i].length()) {
            max.push_back(v[i]);
        }
        if (min[0].length() > v[i].length()) {
            min.clear();
            min.push_back(v[i]);
        } else if (min[0].length() == v[i].length()) {
            min.push_back(v[i]);
        }
    }

    cout << "最長の単語: ";
    for (int i = 0; i < max.size(); i++) {
        cout << max[i] << " ";
    }
    cout << endl;

    cout << "最短の単語: ";
    for (int i = 0; i < min.size(); i++) {
        cout << min[i] << " ";
    }
    cout << endl;

    return 0;
}
