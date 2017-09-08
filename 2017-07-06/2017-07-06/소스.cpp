#include<iostream>
using namespace std;

int main()
{
	int a;
	char f[1000][22];
	char e;
	int soo[1000] = { 0 };
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> soo[i];
		cin.getline(f[i], sizeof(f[i]));
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 1; f[i][j] !='\0'; j++)
		{
			for (int k = 0; soo[i] > k; k++)
			{
				cout << f[i][j];
			}
		}
		cout << '\n';
	}

}