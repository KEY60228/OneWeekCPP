#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> q;
    string s;

    while (true) {
        cout << "文字列を入力: ";
        getline(cin, s);
        if (s == "\0") {
            break;
        }
        q.push(s);
    }

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
