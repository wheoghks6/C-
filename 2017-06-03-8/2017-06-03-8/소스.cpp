#include<iostream>

using namespace std;

void DectpBin(int);


int main()
{
	int num = -1;
	cin >> num;
	DectpBin(num);
}

void DectpBin(int k)
{
	int a[100];
	int i;
	for (i = 0; ;i++)
	{

		a[i] = k % 2;
		k = k / 2;
		if (k == 0)
		{
			break;
		}
	}

	for (int t = i; t >= 0; t--)
	{
		cout << a[t];
	}
	cout << endl;
}