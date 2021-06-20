#include <iostream>
#include <set>

using namespace std;

int main() {
    set<char> t;
    string s;

    cout << "英単語を入力: ";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        t.insert(s[i]);
    }

    cout << "使用されているアルファベット: ";
    for (set<char>::iterator itr = t.begin(); itr != t.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}
