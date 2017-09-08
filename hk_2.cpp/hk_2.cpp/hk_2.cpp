#include<iostream>

using namespace std;

int main()
{
	int i;
	char a[100] = { 0 };
	cin.getline(a,100);

	for (i = 0; ; i++)
	{
		if (a[i] == 0)
		{
			break;
		}
	}
	for (int k = i-1; k >= 0; k--)
	{
		cout << a[k];
	}
}