#include <iostream>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "         By Reza Alfajari          " << endl;
    cout<< "            A2.1900149             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    int Nama_Array[10];
    cout << "Masukan nilai pada : " << endl;
    for(int C=0; C<10; C++)
    {
        cout << "Element [" << C << "] = ";
        cin >> Nama_Array [C];
    }
    cout << "\n";

    cout << "Tampilkan nilai yang dimasukan : " << endl;
    for(int D=0; D<10; D++)
    {
        cout << "Nilai yang terdapat pada element ke";
        cout << D+1 << " = " << Nama_Array[D] << endl;
    }
    cout << "\n";

    return 0;


}
