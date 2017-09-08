#include<iostream>
using namespace std;

int main()

{
	int a;
	int b;
	int d = 0;
	cin >> a >> b;
	int c[10];
	for (int i = 0; i < a; i++)
	{
		cin >> c[i];
	}
	for (int i = a; ; )
	{
		if (b - c[i] > 0)
		{
			b = b - c[i];
			d++;
		}
		else if (b - c[i] < 0)
		{
			i--;
		}
		if (i < 0)
		{
			break;
		}
	}

	cout << d;
}