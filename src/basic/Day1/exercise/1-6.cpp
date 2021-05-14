// prob1-6.(難易度：1)
// cinおよび、coutを用いて、実行例にならい、コンソールから姓と名を入力し、名前を表示するプログラムをつくりなさい。ただし、出力する名前は、姓と名を＋演算子で結合して出力すること。
/* -------------------
姓を入力:山田 ← キーボードから任意にを入力
命を入力:一郎 ← キーボードから任意にを入力
名前は「山田一郎」です。 ← 姓と名を結合して表示
------------------- */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string last, first;

    cout << "姓を入力: ";
    cin >> last;
    cout << "名を入力: ";
    cin >> first;
    cout << "名前は「" << last << first << "」です。" << endl;

    return 0;
}

