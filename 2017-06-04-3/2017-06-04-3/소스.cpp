#include<iostream>

using namespace std;

int main()
{
	int empt;
	int k;
	int a[1000];

	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < k; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < k-1; i++)
	{
		empt = a[0];
		a[k] = empt;
		for (int j = 0; j < k; j++)
		{
			a[j] = a[j + 1];
			cout << a[j]<<" ";
		}
		cout << "\n";
		
	}

}