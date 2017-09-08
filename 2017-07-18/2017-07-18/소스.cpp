#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	int soo[10][100];
	int k[10];
	cin >> a;

	for (int i = 0; i <a; i++)
	{
		cin >> b;
		for (int j = 0; ; j++)
		{
			soo[i][j] = b % 2;
			b = b / 2;
			if (b < 1)
			{
				k[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0;j<=k[i]; j++)
		{
			if (soo[i][j] == 1)
			{
				cout << j<<" ";
			}
		}
	}


}