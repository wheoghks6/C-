#include<iostream>

using namespace std;

int main()
{
	int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int b[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };
	int c[8] = { 0, };
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> c[i];
	}
	for (int i = 0; i < 8; i++)
	{
		if (a[i] == c[i])
		{
			count++;
		}
		else if (b[i] == c[i])
		{
			count--;
		}
	}
	if (count == 8)
	{
		cout << "ascending" << endl;
	}
	else if (count == -8)
	{
		cout << "descending" << endl;
	}
	else
	{
		cout << "mixed" << endl;
	}
}