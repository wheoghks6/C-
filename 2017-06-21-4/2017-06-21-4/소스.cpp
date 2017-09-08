#include<iostream>
using namespace std;

int main()
{
	int T[1000][2];
	int k[1000];
	int c[1000] = { 0 };
	int a;
	int z;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> T[i][j];
		}
	}

	for (int i = 0; i < a; i++)
	{
		if (T[i][0] >= T[i][1])
		{
			k[i] = T[i][1];
		}
		else
		{
			k[i] = T[i][0];
		}
		for (z = k[i]; z >= 1; z--)
		{
			if ((T[i][0] % z) == 0 && (T[i][1] % z) == 0)
			{
				c[i] = z*(T[i][0] / z)*(T[i][1] / z);
				break;
			}
		}

	}

	for (int i = 0; i < a; i++)
	{
		cout << c[i] << "\n";
	}

}