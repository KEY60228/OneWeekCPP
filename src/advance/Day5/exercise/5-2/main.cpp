#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<char, string> m;
    string n;

    m['0'] = "〇";
    m['1'] = "一";
    m['2'] = "二";
    m['3'] = "三";
    m['4'] = "四";
    m['5'] = "五";
    m['6'] = "六";
    m['7'] = "七";
    m['8'] = "八";
    m['9'] = "九";

    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        if (i != 0 && i % 3 == n.length() % 3) {
            cout << ",";
        }
        cout << m[n[i]];
    }
    cout << endl;

    return 0;
}
