#include <iostream>

using namespace std;

int main()
{
    int acc1 = 0;
    int acc2 = 0;
    char firstString [100];
    char secondString [100];
    cout << "Enter first string: ";
    cin.getline(firstString, 100);
    cout << "Enter second string: ";
    cin.getline(secondString, 100);
        while (firstString[acc1]){
            acc1++;
        }
        while (secondString[acc2]){
            acc2++;
        }
    if (acc1 > acc2)
        cout << "First string bigger then second" << endl;
    if (acc1 < acc2)
        cout << "Second string bigger then first" << endl;
    if (acc1 == acc2)
        cout << "Strings are equal" << endl;
    return 0;
}
