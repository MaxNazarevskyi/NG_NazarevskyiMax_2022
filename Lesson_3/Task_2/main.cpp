#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int modifier1 = 1000;
    int modifier2 = 1000;
    int firstNum = 0;
    int secondNum = 0;
    int firstArray [4];
    int secondArray [4];
    srand(time(NULL));
        for (int i = 0; i < 4; i++){
            firstArray[i] = rand() % 10;
            secondArray[i] = rand() % 10;
        }
    cout << "First array: ";
        for (int i = 0; i < 4; i++){
            cout << firstArray[i] << " ";
            firstNum += firstArray[i] * modifier1;
            modifier1 /= 10;
        }
    cout << endl << "Second array: ";
        for (int i = 0; i < 4; i++){
            cout << secondArray[i] << " ";
            secondNum += secondArray[i] * modifier2;
            modifier2 /= 10;
        }
    cout << endl << firstNum;
        if (firstNum > secondNum)
            cout << " > ";
        if (firstNum < secondNum)
            cout << " < ";
    cout << secondNum;
    return 0;
}
