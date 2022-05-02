#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    int a, b, c, D, x1, x2, x;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << endl;
    D = pow(b,2) - 4*a*c;
    cout << "D = " << D << endl;
        if (D > 0)
            cout << endl << "Two answers";
        if (D == 0)
            cout << endl << "One answer";
        if (D < 0)
    cout << endl << "No answer";
    cout << endl;
    x1 = (-b + sqrt(D)) / 2*a;
    x2 = (-b - sqrt(D)) / 2*a;
    x = (-b) / 2*a;
        if (D>0)
            cout << "First answer: " << x1 << endl << "Second answer: " << x2 << endl;
        if (D==0)
            cout << "Answer :" << x;
    return 0;
}
