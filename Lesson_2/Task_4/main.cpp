#include <iostream>

using namespace std;

int main()
{
	int Size = 0;

	cout << "Enter size: ";
	cin >> Size;

	for (int i = 0; i < Size; i++)
	{
		for (int j = 1; j < Size - i; j++)
		{
			cout << " ";
		}

		for (int j = Size - 2 * i; j <= Size; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < Size - 1; i++)
            {
		cout << " ";
            }
		for (int j = 2; j < 3; j++)
        cout << "*";
		cout << endl;
	return 0;
}
