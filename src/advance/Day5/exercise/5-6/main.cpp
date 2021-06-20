#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<string> st;
    string s;

    while (true) {
        cout << "文字列を入力: ";
        getline(cin, s);
        if (s == "\0") {
            break;
        }
        st.push(s);
    }

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
