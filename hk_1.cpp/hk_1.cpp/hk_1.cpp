#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;
void array1(int[], int b);
int searching(int k, int y);

int main()
{
	int e = 0;
	int a;
	int b;
	int c;
	int arr[100];
	cin >> a >> b >> c;

	srand(a);


	for (int i = 0; i < b; i++)
	{
		arr[i] = rand() % 100;
	}

	array1(arr, b);
	for (int i = 0; i < b; i++)
	{
		e = searching(arr[i], c);
		if (e>0)
		{
			cout << i;
			break;
		}
	}
	if (e == 0)
	{
		cout << "-1";
	}

}

void array1(int a[], int b)
{
	int y = 0;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < b - 1; j++)
		{
			if (a[j] >= a[j + 1])
			{
				y = a[j + 1];
				a[j + 1] = a[j];
				a[j] = y;
			}
		}
	}
	for (int i = 0; i < b; i++)
	{
		cout << a[i]<< setw(3);
	}
	cout << "\n";
}

int searching(int k, int y)
{
	if (k == y)
	{
		return k;
	}
	else
	{
		return 0;
	}
}