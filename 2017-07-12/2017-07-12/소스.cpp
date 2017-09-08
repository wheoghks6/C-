#include<iostream>

using namespace std;

int main()
{
	int a[31] = { 0, };
	int k;
	for (int i = 1; i < 29; i++)
	{
		cin >> k;
		a[k]++;
	}

	for (int i = 1; i < 31; i++)
	{
		if (a[i] == 0)
		{
			cout << i;
			cout << "\n";
		}
	}

}