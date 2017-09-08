#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	int s = 0;
	int i;
	int count = 0;
	cin >> a;
	if (a < 10)
	{	
		if (a >= 5)
		{
			cout << "10";
		}
		else
		{
			cout << "0";
		}
	}
	else
	{
		for (i = 0; s > 10; i++)
		{
			s = a / pow(10, i);
			count = count + 1;
		}
		d = pow(10, count);
		cout << d << endl;
		f = i - 1;
		b = a / (pow(10, f));
		e = a%d;
		c = b % 10;
		if (c >= 5)
		{
			a = a + d - b;
		}
		else
		{
			a = a - b;
		}
		cout << a;
	}
}