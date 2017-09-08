#include<iostream>

using namespace std;


int main()
{

	int k[100];
	int a;
	int i;
	int b;
	char empt;
	cin >> a;

	for (i = 0; ; i++)
	{
		k[i] = a % 16;
		a = a / 16;
		if (a == 0)
		{
			break;
		}
	}

	for (int j = i; j >= 0; j--)
	{
		if(k[i]<10)
		cout << k[j];
		else if (k[i] >= 10)
		{
			b = k[i] - 10;
			empt = 'A' + b;
			cout << empt;
		}
		
	}

}