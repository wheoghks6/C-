#include<iostream>

using namespace std;

void max(int [],int );
void min(int [],int );
void sum(int [],int );

int main()
{
	int a, b, c, d, e;
	int num[100];
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> num[i];
	}
	max(num,a);
	min(num,a);
	sum(num,a);

}

void min(int t[],int a)
{
	int x = 500;
	for (int i = 0; i < a; i++)
	{
		if (t[i] < x)
		{
			x = t[i];
		}
	}
	cout << "\nmin : " << x;
}

void max(int t[], int a)
{
	int x = 0;

	for (int i = 0; i < a; i++)
	{
		if (t[i] > x)
		{
			x = t[i];
		}
	}
	cout << "\nmax: " << x;
}

void sum(int t[], int a)
{
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		sum = sum + t[i];
	}
	cout << "\nsum: " << sum << endl;

}