#ifndef MYSTRING_H
#define MYSTRING_H
#include <vector>
#include <iostream>

using namespace std;

class MyString
{
protected:
    vector<char> chars;
public:
    MyString();
    MyString(const MyString& str);
    MyString(MyString&& str);
    MyString(const char* ptr);
    MyString(const vector<char>& chars);
    ~MyString();
    size_t length();
    MyString sum(const MyString& str);
    void display();
    MyString operator +(const MyString& str);
//    bool operator >(const MyString& str);
//    bool operator <(const MyString& str);
//    bool operator >=(const MyString& str);
//    bool operator <=(const MyString& str);

//    bool operator ==(const MyString& str);
//    bool operator !=(const MyString& str);
    MyString& operator =(const MyString& str);
    MyString& operator =(MyString&& str);
    friend ostream& operator <<(ostream& out, const MyString& str);
    friend istream& operator >>(istream& in, MyString& str);

};
ostream& operator <<(ostream& out, const MyString& str);
istream& operator >>(istream& in, MyString& str);
#endif // MYSTRING_H
