#include <iostream>
#include "binarystring.h"
#include "mystring.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string z;
    string x;
    cout<<"������� ������ �����"<<endl;
    cin>>z;
    cout<<"������� ������ �����"<<endl;
    cin>>x;
    BinaryString bit=z;
    BinaryString bit2=x;


    if (bit < bit2) {
        cout << bit<<"<"<<bit2;
    } else if(bit>bit2){
        cout << bit<<">"<<bit2;
    }else{
        cout << bit<<"="<<bit2;
    }

    return 0;
}
