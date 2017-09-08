#include<iostream>
using namespace std;

int main()

{
	int soo[10][15];
	int k[10];
	int p[10] = { 0, };
	int s = 0;
	int c = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cin >> soo[i][j];
			if (soo[i][j] == -1)
			{
				break;
				s = 1;
				c = i;
			}
			else if (soo[i][j] == 0)
			{
				k[i] = j;
			}
			else if (soo[i][j] == '\0')
			{
				break;
			}
		}
		for (int a = 0; a < k[i]; a++)
		{
			for (int b = 1; b < k[i]; b++)
			{
				if (soo[i][a] * 2 == soo[i][b])
				{
					p[i]++;
				}
			}
		}
		if (s == 1)
		{
			break;
		}
	}
	for (int i = 0; i < c; i++)
	{
		cout << p[i];
	}

}