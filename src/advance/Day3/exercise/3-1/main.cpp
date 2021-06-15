#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
T Max(T a, T b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    cout << Max<int>(1, 2) << endl;
    cout << Max<double>(1.75, 3.12) << endl;
    string s1 = "aiu";
    string s2 = "eo";
    cout << Max<string>(s1, s2) << endl;
    return 0;
}
