#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    int a, b, b1, c, D, x1, x2, sqD, x;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "\n";
    b1 = pow(b,2);
    D = b1 - 4*a*c;
    cout << "D = " << D << "\n";
        if(D > 0)
            cout << "\nTwo answers";
        if(D == 0)
            cout << "\nOne answer";
        if(D < 0)
    cout << "\nNo answer";
    cout << "\n";
    sqD = sqrt(D);
    x1 = (-b + sqD) / 2*a;
    x2 = (-b - sqD) / 2*a;
    x = (-b) / 2*a;
        if (D>0)
            cout << "First answer: " << x1 << "\n" << "Second answer: " << x2 <<endl;
        if(D==0)
            cout << "Answer :" << x;
    return 0;
}
