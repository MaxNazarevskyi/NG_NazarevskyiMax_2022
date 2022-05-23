#include <iostream>

using namespace std;

void tree(int Size);
void upTree(int Size, int i);
void downTree(int Size, int i);

void tree(int Size)
{
    upTree(Size, 0);
    downTree(Size, 0);
}

void upTree(int Size, int i)
{
    for (int j = 1; j < Size - i; j++)
        cout << " ";
    for (int j = Size - 2 * i; j <= Size; j++)
		cout << "*";
    cout << endl;
	if (i != Size - 1)
        upTree(Size, i + 1);

}

void downTree(int Size, int i)
{
    if (i < Size - 1)
        cout << " ";
    if (i == Size - 1)
        cout << "*";
    downTree(Size, i + 1);
}

int main()
{
    int Size;
    cout << "Enter size: ";
    cin >> Size;
    tree(Size);
    return 0;
}
