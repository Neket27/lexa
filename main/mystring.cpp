#include "mystring.h"

MyString::MyString(): chars(vector<char>())
{
    cout<<"=================\n"<<endl;

    cout<<"DEF CONSTR"<<endl;

}

MyString::MyString(const MyString &str): chars(str.chars)
{
    cout<<"=================\n"<<endl;

    cout<<"COPY CONSTR"<<endl;

}

MyString::MyString(MyString &&str): chars(move(str.chars))
{
    cout<<"=================\n"<<endl;

    str.chars.clear();
    cout<<"MOVEMENT CONSTR"<<endl;

}

MyString::MyString(const char *ptr)
{
    cout<<"=================\n"<<endl;

    cout<<"PARAM CHAR CONSTR"<<endl;

    size_t i = 0;
    while(ptr[i]!='\0')
    {
        chars.push_back(ptr[i]);
        i++;
    }
}

MyString::MyString(const vector<char>& chars)
{
    cout<<"=================\n"<<endl;

    cout<<"PARAM VECTOR CONSTR"<<endl;

    this->chars = chars;
}

MyString::~MyString()
{
    chars.clear();
}

size_t MyString::length()
{
    return chars.size();
}
MyString MyString::sum(const MyString& str)
{
    cout<<"=================\n"<<endl;
    cout<<"SUM BEGIN"<<endl;
    MyString res = MyString(*this);
    cout<<"TEMP OBJECT CREATED"<<endl;

    for(auto x: str.chars)
        res.chars.push_back(x);
    return res;
}

void MyString::display()
{
    for(auto x: chars)
        cout<<x;
}

MyString MyString::operator +(const MyString& str)
{
    return this->sum(str);
}

MyString& MyString::operator =(const MyString& str)
{
    cout<<"=================\n"<<endl;

    cout<<"CA"<<endl;
    chars.clear();
    for(auto x: str.chars)
        chars.push_back(x);

    return *this;
}

MyString& MyString::operator =(MyString&& str)
{
    cout<<"=================\n"<<endl;

    cout<<"MA"<<endl;
    chars.clear();
    for(auto x: str.chars)
        chars.push_back(x);
    str.chars.clear();

    return *this;
}

ostream &operator <<(ostream &out, const MyString &str)
{
    for(auto x: str.chars)
        out<<x;
    return out;
}

istream &operator >>(istream &in, MyString &str)
{
    string s;
    in>>s;
    str.chars.clear(); //очистка вектора символов
    for (auto x: s)
        str.chars.push_back(x);
    return in;
}
