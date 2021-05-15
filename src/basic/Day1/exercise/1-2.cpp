// prob1-2.(難易度：1)
// 以下のプログラムの3行目の「using namespace std;」を削除しても同じ動作をするようにプログラムを作り変えなさい。
/* -------------------
#include <iostream>

using namespace std;

int main(){
    cout << "prigramming in C++ Language" << endl;
    return 0;
}
------------------- */

#include <iostream>

int main() {
    std::cout << "programming in C++ Language" << std::endl;

    return 0;
}

