#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class NewString {
    private:
        string m_value;
    public:
        NewString();
        NewString(string value);
        NewString(NewString& value);
        NewString& operator= (NewString& n);
        bool operator== (NewString& n);
        string getValue();
};

#endif
