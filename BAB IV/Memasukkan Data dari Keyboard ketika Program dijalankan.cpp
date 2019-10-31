#include <iostream>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "         By Reza Alfajari          " << endl;
    cout<< "            A2.1900149             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    double panjang, lebar, keliling;

    cout << "Menghitung keliling persegi pangjang" << endl;

    cout << "Panjang : " << endl;
    cin >> panjang;

    cout << "Lebar : ";
    cin >> lebar;

    keliling = 2 * (panjang + lebar);

    cout << "Keliling = " << keliling << endl;

    return 0;
}
