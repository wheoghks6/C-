#include <iostream>
using namespace std;

int main()
{
	int a;
	int k = 1;
	cin >> a;

	for (int i = a; i > 0; i--)
	{
		k = k*i;
	}

	cout << k;
}