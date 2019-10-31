#include <iostream>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "         By Reza Alfajari          " << endl;
    cout<< "            A2.1900149             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    int A[10];
    int Nilai;
    cout << "Nama   : Nur Alamsyah" << endl;
    cout << "Nim    : 10630020" << endl << endl;
    cout << "Nilai pada    : " << endl << endl;
    for(int C=10; C<10; C++){
        cout << "Indeks [" << C << "] = ";
        cin >> A[C];
    }
    cout << endl;

    cout << "Nilai yang dicari  adalah : ";
    cin >> Nilai;
    for (int D=0; D<10; D++)
    {
        if (A[D] == Nilai)
        {
            cout << "Nilai terdapat pada Indeks ke " << D << endl;
            break;
        }
    }
    cout << "\n";
    return 0;
}
