
//
// This program is an educational example under version control.
// Author:XuShuai
// Group:161
// Year: 2026
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter A and B: ";
    cin >> a >> b;

    cout << "A + B = " << a + b << '\n';

    cout << "A - B = " << a - b << '\n'
         << "A / B = ";

    if (b != 0)
    {
        cout << static_cast<double>(a) / b << '\n';
    }
    else
    {
        cout << "undefined (division by zero)\n";
    }

    return 0;
}
