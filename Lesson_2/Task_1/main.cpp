#include <iostream>

using namespace std;

int main()
{
    int Size;
    cout << "Size : ";
    cin >> Size;
    for(int i=0; i<Size; i++)
    {
        for(int j=0; j<Size; j++)
        {
            if((i>=1 && i<=Size-2) && (j>=1 && j<=Size-2))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
