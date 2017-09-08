#include<iostream>
#include<iomanip>
using namespace std;

void printBubbles(const int bubbles[], const int n);
void lineup(int &large, int &small);

int main()
{
	const int size = 10;
	int a[size] = { 2,6,4,8,10,12,89,68,45,37 };

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			lineup(a[j], a[j + 1]);
		}
	}

	cout << "\n";
	printBubbles(a, size);
	cout << "\n";
}

void printBubbles(const int bubbles[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << bubbles[i];
	}

}
void lineup(int &large, int &small)
{
	int a;
	if (large > small)
	{
		a = small;
		small = large;
		large = a;
	}
}