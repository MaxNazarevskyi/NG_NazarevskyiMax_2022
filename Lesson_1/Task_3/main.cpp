#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    int answer = 0;
    cout << "Enter your age:" << endl;
    cin >> age;
    if (age > 10){
        cout << "Do you study? (1/0): ";
        cin >> answer;
        if (answer == 1){
            cout << "You are awesome!";
        }
        else{
            cout << "Why?";
        }
    }
    else{
        cout << "Wow, you are so big";
    }
    return 0;
}
