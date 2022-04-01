#include "binarystring.h"
using namespace std;
bool BinaryString::check()
{
    for (auto x: chars)
    {
        bool f = false;
        for(auto y: digits)
        {
            if(y==x)
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
    str.chars.clear(); //очистка вектора символов
    for (auto x: s)
        str.chars.push_back(x);
    str.toZero();
    return in;
}

void BinaryString::comparison() {
    
    char a[80];
    char b[80];
    cout << "number_1:" << endl;
    cin.getline(a, 79);
    cout << "number_2" << endl;
    cin.getline(b, 79);
    int val_1 = atoi(a);
    int val_2 = atoi(b);

    size_t i = 0;
    while (a[i] != '\0')
    {
        chars.push_back(a[i]);

        i++;
    }
    if (check() != true) {
        i = 0;
        while (b[i] != '\0')
        {
            chars.push_back(b[i]);
            i++;
        }

        if (check() != true) {
         
            if (val_1 == val_2) {
                cout << val_1 << " = " << val_2 << endl;
            }
            else if (val_1 > val_2) {
                cout << val_1 << " > " << val_2 << endl;
            }
            else {
                cout << val_1<<" < "<<val_2 << endl;

            }
        }
        else {
            cout << "ERROR" << endl;
            toZero();
        }
    }
    else {
        cout << "ERROR" << endl;
        toZero();
    }


}