/* -------------------
#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData{
private:
    //  メンバ変数number
    int number;
    //  メンバ変数comment
    string comment;
public:
    //  初期化
    void init();
};

#endif // _CDATA_H_
------------------- */

#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData {
    private:
        int number;
        string comment;
    public:
        void init();
        void setNumber(int);
        int getNumber();
        void setComment(string);
        string getComment();
};

#endif
