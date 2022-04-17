#ifndef BINARYSTRING_H
#define BINARYSTRING_H
#include "mystring.h"
#include "binarystring.h"
using namespace std;
class BinaryString: public MyString
{
private:
    bool check();
    void toZero();
    const vector<char>digits = {'0','1','2','3','4','5','6','7'};
public:
    void comparison(const char* ptr, const char* ptr2);
    BinaryString();
    BinaryString(const BinaryString& str);
    BinaryString(BinaryString&& str);
    BinaryString(const char* ptr);
    BinaryString(string& string);
    BinaryString(const vector<char>& chars);
    friend istream &operator >>(istream &in, BinaryString &str);
};
istream &operator >>(istream &in, BinaryString &str);
#endif // BINARYSTRING_H

