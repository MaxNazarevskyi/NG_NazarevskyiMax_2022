#include <iostream>

using namespace std;

int main()
{
    int motherboard = 0, videocard = 0, CPU = 0, PC_cost = 0;
    float discount = 0;
    cout << "Motherboard price: " << endl;
    cin >> motherboard;
    cout << "Videocard price: " << endl;
    cin >> videocard;
    cout << "CPU price: " << endl;
    cin >> CPU;
    cout << "Discount: ";
    cin >> discount;
    discount = (motherboard + videocard + CPU) * (discount * 0.01);   // transformation to percent
    PC_cost = (motherboard + videocard + CPU) - discount;
    cout << "Your PC will cost: " << PC_cost;
    return 0;
}
