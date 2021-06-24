#include "NewString.h"

NewString::NewString() {
    m_value = "";
}

NewString::NewString(string value) {
    m_value = value;
}

NewString::NewString(NewString& value) {
    m_value = value.getValue();
}

NewString& NewString::operator= (NewString& n) {
    m_value = n.getValue();
    return *this;
}

bool NewString::operator== (NewString& n) {
    string s1 = this->getValue();
    string s2 = n.getValue();
    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    return s1 == s2;
}

string NewString::getValue() {
    return m_value;
}
