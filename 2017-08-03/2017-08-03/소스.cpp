#include<iostream>
using namespace std;

int main()
{
	int a;
	int count = 0;
	int k = 0;
	int soo[20] = { 0, };
	cin >> a;
	if (a < 10)
	{
		if (a >= 5)
		{
			cout << "10";
		}
		else
		{
			cout << "0";
		}
	}
	else {
		for (int i = 0; a > 0; i++)
		{
			soo[i] = a % 10;
			a = a / 10;
			count = count + 1;
		}
		k = count - 1;
		if (soo[(k - 1)] >= 5)
		{
			soo[(k)] = soo[(k)] + 1;
		}

		for (int i = 0; i < k; i++)
		{
			soo[i] = 0;
		}
		for (int i = k; i >= 0; i--)
		{
			cout << soo[i];
		}
	}


}