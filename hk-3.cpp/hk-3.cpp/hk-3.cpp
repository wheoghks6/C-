#include<iostream>

using namespace std;

int main()
{
	int a[100][100];
	int b;
	cin >> b;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			a[i][j] = 1;
		}
	}

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i > 1 && j>0)
			{
				if (j == i)
				{
					a[i][j] = 1;
				}
				else
				{
					a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				}
			}
			cout << a[i][j]<<"  ";
		}
		cout << "\n";
	}


}
