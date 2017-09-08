#include<iostream>

using namespace std;

int main()
{
	int a[100] = { -1 };
	int i = 0;
	int b;
	cin >> b;

	while (b != 0)
	{
		i++;
		a[i] = b % 2;
		b = b / 2;
	}

	for (int j = i; j >0; j--)
	{
		cout << a[j];
	}


}