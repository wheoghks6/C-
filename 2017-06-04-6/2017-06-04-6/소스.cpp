#include<iostream>

using namespace std;

int main()
{
	int k[5] = { 0 };
	char t[10][5];
	int a[5][5] = { 0 };
	int q = 0;
	int r = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> t[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (t[j][i] == 'O')
			{
				a[i][count]++;
			}
			else if (t[j][i] == 'X')
			{
				if (a[i][count] != 0)
				{
					count++;
				}
				k[i]++;
			}
		}
		count = 0;
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] > r)
			{
				r = a[i][j];
			}
		}
	}



	for (int i = 0; i < 5; i++)
	{
		if (k[i] == 10)
		{
			q++;
		}
	}
	cout << r << " " << q;
}