// prob2-2.(難易度：2)
// 以下のプログラムを改造し、クラスMinMaxのメンバ関数max(),min()の引数の数を3つにし、期待される実行結果にならい、3つの数の最大値・最小値を出せるようにプログラムを改造しなさい。
/* -------------------
#include <iostream>
#include "minmax.h"

using namespace std;

int main(){
    MinMax m;
    int a = 4;
    int b = 2;
    cout << a << "と" << b << "のうち、最大のものは" << m.max(a,b) << endl;
    cout << a << "と" << b << "のうち、最小のものは" << m.min(a,b) << endl;
    return 0;
}
------------------- */
/* -------------------
実行結果
4と2のうち、最大のものは4
4と2のうち、最小のものは2
------------------- */
/* -------------------
期待される実行結果
4と2と7のうち、最大のものは7
4と2と7のうち、最小のものは2
------------------- */

#include <iostream>
#include "minmax.h"

using namespace std;

int main() {
    MinMax m;
    int a = 4;
    int b = 2;
    int c = 7;
    cout << a << "と" << b << "と" << c << "のうち、最大のものは" << m.max(a, b, c) << endl;
    cout << a << "と" << b << "と" << c << "のうち、最小のものは" << m.min(a, b, c) << endl;
}
