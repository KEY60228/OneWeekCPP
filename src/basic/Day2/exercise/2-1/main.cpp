// prob2-1.(難易度：1)
// 次のプログラムで使われすクラスKeisanに、メンバ変数a,bの引き算を帰すメンバ関数sub()を追加し、期待される実行結果のような出力結果が得られるようにプログラムを改造しなさい。
/* -------------------
#include <iostream>
#include "keisan.h"

using namespace std;

int main() {
    Keisan k;
    k.a = 4;
    k.b = 3;
    cout << k.a << " + " << k.b << " = " << k.add() << endl;
    return 0;
}
------------------- */
/* -------------------
実行結果
4 + 3 = 7
------------------- */
/* -------------------
期待される実行結果
4 + 3 = 7
4 - 3 = 1   ← 新規に追加したメンバ関数sub()を利用して計算
------------------- */

#include <iostream>
#include "keisan.h"

using namespace std;

int main() {
    Keisan k;
    k.a = 4;
    k.b = 3;
    cout << k.a << " + " << k.b << " = " << k.add() << endl;
    cout << k.a << " - " << k.b << " = " << k.sub() << endl;
    return 0;
}