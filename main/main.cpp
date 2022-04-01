#include <iostream>
#include "binarystring.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
  /*  MyString str = MyString("apple ");
    cout << str << endl;
    MyString str2 = MyString(str);
    cout << str2 << endl;

    auto str3 = str + str2;
    cout << str3 << endl;

    str3 = str2;
    cout << str3 << endl;


    MyString str5;
    cout << str5 << endl;

    str5 = str + str2;
    cout << str5 << endl;

    //BinaryString t = "121";
    //cout <<"t= " << t << endl;

   // BinaryString t2 = "111";
   // cout<<"t2= " << t2 << endl;

    /*const char size = 3;
    char* val_1 = new char[size];
    char* val_2 = new char[size];
    val_1[0] = '1';
    val_1[1] = '6';
    val_1[2] = '3';
    val_2[0] = '1';
    val_2[1] = '2';
    val_2[2] = '4';
    */


    BinaryString a;
    a.comparison();

   // vector<MyString>ch;
   // ch.push_back(MyString("11111"));


    return 0;
}
