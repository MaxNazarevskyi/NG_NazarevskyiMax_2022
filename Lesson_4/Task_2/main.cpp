#include <iostream>

using namespace std;

int main()
{
    char String [100];
    int acc = 0;
    cout << "Enter a string: ";
    cin.getline (String,100);
    cout << "Vowels with paired index: ";
    char vowels [6] = {'a','e','i','u','o','y'};
        while (String[acc]){
            for (int i = 0; i < 6; i++)
                if (String[acc] == vowels[i] && acc % 2){
                    cout << String[acc];
                }
            acc++;
        }
    return 0;
}
