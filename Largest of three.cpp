//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Largest number is: " << a;
    else if (b >= a && b >= c)
        cout << "Largest number is: " << b;
    else
        cout << "Largest number is: " << c;

    return 0;
}
/* OUTPUT:
Enter three numbers: 1 4 7
Largest number is: 7
*/
