#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> m;
    string s;

    m["cat"] = "猫";
    m["dog"] = "犬";
    m["bird"] = "鳥";
    m["tiger"] = "トラ";

    cout << "英語で動物の名前を入力してください: ";
    cin >> s;

    map<string, string>::iterator itr;
    itr = m.find(s);
    if (itr == m.end()) {
        cout << "対応するデータは登録されていません" << endl;
    } else {
        cout << "「" << itr->second << "」です" << endl;
    }

    return 0;
}