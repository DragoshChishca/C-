#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
char a;

int main()
{
    cout << "1) Date de intrare: ";
    a = getche ();
    cout << "\n";
    cout << "Date de iesire:\n";
    cout << setw(1) << setfill (a) << a << endl;
    cout << setw(2) << setfill (a) << a << endl;
    cout << setw(3) << setfill (a) << a << endl;
    cout << setw(4) << setfill (a) << a << endl;


    cout << "2) Date de intrare: ";
    a = getche ();
    cout << "\n";
    cout << "Date de iesire:\n";
    cout << a << " " << a << " " << a << " " << a << endl;
    cout << " " << a << " " << a << " " << a << endl;
    cout << "  " << a << " " << a << endl;
    cout << "   " << a << endl;

    cout << "3) Date de intrare: ";
    a = getche ();
    cout << "\n";
    cout << "Date de iesire:\n";
    cout << a << "" << a << "" << a << "" << a << endl;
    cout << " " << a << "" << a << "" << a << endl;
    cout << "  " << a << "" << a << endl;
    cout << "   " << a << endl;

    cout << "4) Date de intrare: ";
    a = getche ();
    cout << "\n";
    cout << "Date de iesire:\n";
    cout << "   " << a << endl;
    cout << "  " << a << " " << a << endl;
    cout << " " << a << " " << a << " " << a << endl;
    cout << a << " " << a << " " << a << " " << a << endl;


    return 0;
}
