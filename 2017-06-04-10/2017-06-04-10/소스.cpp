#include<iostream>

using namespace std;

int main()
{
	int a[100][100] = { 0, };
	int b;
	
	cin >> b;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			a[i][j] = 0;
		}
	}
	for (int i = 0; i < b; i++)
	{
		a[0][i] = 1;
	}

	for (int i = 1; i < b; i++)
	{
		for (int j = i; j < b; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i][j - 1];
		}
	}

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < b; j++ )
		{
			if (a[j][i] != 0)
			{
				cout << a[j][i];
			}
			else
			{
				cout << " ";
			}
			cout << " ";
		}
		cout << endl;
	}

}