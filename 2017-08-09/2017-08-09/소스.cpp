#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[50], b[50];
	int k[50] = { 0, };
	int f = 50;
		cin >> a>>b;
		int c, d,e;

		c = strlen(a);
		d = strlen(b);
		e = d - c;
		
		for (int i = 0; i <= e; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (a[j] != b[j + i])
				{
					k[i]++;
				}
			}
		}

		for (int i = 0; i <= e; i++)
		{
			if (f > k[i])
			{
				f = k[i];
			}
		}
		cout << f;
}