#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int k;
	int a[25];

	for (int i = 0; i < 25; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << setw(3) << a[i];
	}
	cout <<"\n"<<setw(3)<< a[15];
	for (int i = 16; i < 19; i++)
	{
		cout << setw(3) << a[i];
	}
	cout <<setw(3)<<a[5] << "\n"<<setw(3) << a[14];
	for (int i = 23; i < 25; i++)
	{
		cout <<setw(3)<< a[i];
	}
	cout << setw(3)<<a[19]<<setw(3) << a[6] << "\n"<<setw(3)<<a[13];
	for (int i = 22; i > 19; i--)
	{
		cout << setw(3) << a[i];
	}
	cout << setw(3) << a[7]<<"\n";
	for (int i = 12; i > 7; i--)
	{
		cout << setw(3) << a[i];
	}

}

