#include <iostream>

using namespace std;

int main()
{
    int finder, Size;
    cout << "Enter array size: ";
    cin >> Size;
    int massive [Size];
        for (int i = 0; i < Size; i++){
            cout << "Enter " << i + 1 << "th element: ";
            cin >> massive[i];
        }
        cout << "What number you want to check: ";
        cin >> finder;
        for (int i = 0; i < Size; i++){
            if (finder == massive[i])
                cout << "I know that number!";
        }
    return 0;
}
