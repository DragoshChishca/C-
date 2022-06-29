#include <iostream>
using namespace std;
int main()
{
    int copil_1, copil_2, mere;
    cout << "Introduceti numarul de mere:" << endl;
    cin >> mere;
    copil_1 = mere;
    copil_2 = mere;
    copil_1 = mere - 2;
    copil_2 = mere + 1;
    cout << copil_1 << endl << copil_2;
    return 0;
}

