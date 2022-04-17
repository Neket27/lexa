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
MyString::MyString(string& string) {
    for (auto x : string) {
        chars.push_back(x);
    }
    cout << endl;
    cout << "PARAMETR STRING CONSTRUCTOR" << endl;
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
bool MyString::operator==(const MyString& str)
{
    if (str.chars.size()!=this->chars.size())
        return false;
    else {
        for (size_t i = 0; i < chars.size(); i++)
            if (this->chars.at(i) != str.chars.at(i))
                return false;
        return true;
    }
}
bool MyString::operator!=(const MyString& str)
{
    if (str.chars.size() != this->chars.size())
        return false;
    else {
        for (size_t i = 0; i < chars.size(); i++)
            if (this->chars.at(i) == str.chars.at(i))
                return false;
        return true;
    }
}
bool MyString::operator>(const MyString& str)
{
    char* arr = new char[chars.size()];
    char* arr2 = new char[str.chars.size()];
    for (size_t i = 0; i < chars.size(); i++){
        arr[i] = chars[i];
    }
    for (size_t i = 0; i < str.chars.size(); i++) {
        arr2[i] = str.chars[i];
    }
    int val_1 = atoi(arr);
    int val_2 = atoi(arr2);
    if (val_1 > val_2){
        return true;
    }
    else {
        return false;
    }
}
bool MyString::operator<(const MyString& str)
{
    char* arr = new char[chars.size()];
    char* arr2 = new char[str.chars.size()];
    for (size_t i = 0; i < chars.size(); i++){
        arr[i] = chars[i];
    }
    for (size_t i = 0; i < str.chars.size(); i++) {
        arr2[i] = str.chars[i];
    }
    int val_1 = atoi(arr);
    int val_2 = atoi(arr2);
    if (val_1 < val_2){
        return true;
    }
    else {
        return false;
    }
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
