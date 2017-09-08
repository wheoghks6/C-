#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;

void bubblesort(int[]);
int binarysearch(int[], int key);

int main() {
	int a[15];
	int key;
	for (int i = 0; i < 15; i++)
	{
		cin >> a[i];
	}
	bubblesort(a);
	for (int i = 0; i < 15; i++)
	{
		cout<< a[i]<<setw(3);
	}
	cout << "\ninput key : ";
	cin >> key;
	cout<<binarysearch(a, key);
}

void bubblesort(int b[])
{
	int x = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (b[j] > b[j + 1])
			{
				x = b[j];
				b[j] = b[j + 1];
				b[j + 1] = x;
			}
		}
	}
}
int binarysearch(int b[], int key)
{
	int low = 0;
	int high = 14;
	int middle;
	middle = (low + high) / 2;
	for (int i=0;i<high;i++)
	{
		if (key ==b[middle])
		{
			return middle;
		}
		else if (key < b[middle])
		{
			middle = (middle) / 2;
		}
		else if (key > b[middle])
		{
			middle = (middle + high) / 2;
		}
	}
	return -1;
}