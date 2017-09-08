#include<iostream>

using namespace std;

int main()
{
	char a[21];
	char b;
	cin.get(a, sizeof(a));

	for (int i = 0; i < 20; i++)
	{
		if ('A' <= a[i] && a[i] <= 'Z')
		{
			b = (a[i] + 32);
			cout << b;
		}
		else if ('a' <= a[i] && a[i] <= 'z')
		{ 
			b=(a[i] - 32);
			cout << b;
		}
		if (i % 5 == 4)
		{
			cout << "\n";
		}
	}

}