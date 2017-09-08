#include<iostream>

using namespace std;

int main()
{
	int a[100];
	int b;
	cin >> b;

	int c = -1;
	int d = 0;
	int e = b - 1;

	for (int i = 0; i < b; i++)
	{
		cin >> c;
		if (c % 2 == 0)
		{
			a[d] = c;
			d++;
		}
		else if (c % 2 == 1)
		{
			a[e] = c;
			e--;
		}
	}

	for (int i = 0; i < b; i++)
	{
		cout << a[i] << "  ";
	}


}