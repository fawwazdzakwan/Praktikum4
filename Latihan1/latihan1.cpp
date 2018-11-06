#include<iostream>
using namespace std;
int main ()
{
    int max,A;
    max=0;

    do{
        cout<< "masukkan nilai di masukkan :"; cin >>A;
        if (max<A)
            max=A;
    }
    while (A!=0);
    cout<< "hasilnya = " <<max<< endl;
    return 0;
}
