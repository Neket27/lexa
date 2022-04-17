#include "binarystring.h"
using namespace std;
bool BinaryString::check()
{
    for (size_t i=0;i<chars.size();i++)
    {
        bool f = false;
        for(size_t j=0;i<digits.size();j++)
        {
            if(digits[j]==chars[i])
            {
                f = true;
                break;
            }

        }
        if(!f)
            return true;
    }
    return false;
}

void BinaryString::toZero()
{
    chars.clear();
    chars.push_back('0');
}


BinaryString::BinaryString(): MyString()
{

}

BinaryString::BinaryString(const BinaryString &str): MyString(str)
{
    if (check())
        toZero();
}

BinaryString::BinaryString(BinaryString &&str): MyString(str)
{
    if (check())
        toZero();
}
BinaryString::BinaryString(const char* ptr): MyString(ptr)
{
    if (check())
        toZero();
}
BinaryString::BinaryString(const vector<char>& chars):MyString(chars)
{
    if (check())
        toZero();
}
istream &operator >>(istream &in, BinaryString &str){
    string s;
    in>>s;
    str.chars.clear();
    for (auto x: s)
        str.chars.push_back(x);
    str.toZero();
    return in;
}

BinaryString::BinaryString(string &string) : MyString(string) {

}
