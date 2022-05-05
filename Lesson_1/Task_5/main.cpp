#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    int a, b, c, D;
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
        if (D>0)
            cout << "First answer: " << (-b + sqrt(D)) / 2*a << endl << "Second answer: " << (-b - sqrt(D)) / 2*a << endl;
        if (D==0)
            cout << "Answer :" << (-b) / 2*a;
    return 0;
}
