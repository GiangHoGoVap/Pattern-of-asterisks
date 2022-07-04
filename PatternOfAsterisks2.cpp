/*
    *
   **
  ***
 ****
*****
 */

#include <iostream>
using namespace std;
int main()
{
	int N, i, j, k;

	do
	{
		cout << "Input the number of rows: ";
		cin >> N;
		if (!cin.good())
		{
			cin.clear();
			cin.ignore(1024, '\n');
		}
	} while (N <= 0);

	for (i = N; i >= 1; i--)
	{
		for (j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (k = N; k >= i; k--)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
