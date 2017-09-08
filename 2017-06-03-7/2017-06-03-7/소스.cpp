#include<iostream>

using namespace std;

int main()
{
	int a[100];
	int c[100];
	int b, d = 0,e=0;
	cin >> b;
	d = b;
	for (int i = 0; i < b; i++)
	{
		cin >> a[i];
	}
	b = b - 1;
	for (int i = 0;i<d; i++)
	{
		if (a[i] % 2 == 0)
		{
			c[e] = a[i];
			e++;
		}
		else if(a[i] %2== 1)
		{
			c[b] = a[i];
			b = b - 1;
		}
		
	}

	for (int i = 0; i < d; i++)
	{
		cout << c[i] << " ";
	}


}