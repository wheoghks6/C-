#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
void array1(int [], int b);
int searching(int[], int x, int y);

int main()
{
	int a;
	int b;
	int c;
	int arr[100] = { -1, };
	cin >> a >>b >>c;

	srand(a);
	

	for (int i = 0; i <= b; i++)
	{
		arr[i] = rand() % 100;
	}

	array1(arr, b);
	cout<< searching(arr, b, c) <<endl;

}

void array1(int a[], int b)
{
	int y = 0;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j <= b - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				y = a[j+1];
				a[j + 1] = a[j];
				a[j] = y;
			}
		}
	}
	for (int i = 0; i < b; i++)
	{
		cout << setw(3) << a[i];
	}
	cout << "\n";
}

int searching(int k[], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		if (k[i] == y)
		{
			return i;
		}
	}
	return -1;

}