#include <iostream>

using namespace std;

int main()
{
    int Size = 100;
    char str[Size] = {};
    cout << "Enter your string: ";
    cin.getline(str, Size);
    int words = 0;
    for (int i = 0; i < Size; i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(!(str[i+1]>='a' && str[i+1]<='z') || (str[i+1]>='A' && str[i+1]<='Z')){
            words++;
            }
        }
    }
    cout << words;
    return 0;
}
