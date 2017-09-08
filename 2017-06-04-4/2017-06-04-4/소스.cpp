#include<iostream>

using namespace std;


int main()
{
	int soo[501] = { 0 };
	int k[501];
	int a,b;
	cin >> a;

	for (int i = 1; i < a; i++)
	{
		cin >> b;
		soo[b] = 1;
	}

	for (int i = 1; i <= a; i++)
	{
		if (soo[i] == 0)
		{
			cout << i;
		}
	}
	cout << "\n";
}