#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int c = 0;
	char d, e;
	int  i = 1;
	cin >> a;
	cin >> d;
	cin >> b;
	if (d == '+')
	{
		c = a + b;
		cout << c <<endl;
	}
	else if (d == '-')
	{
		c =  a - b;
		cout << c << endl;
	}
	else if (d == '*')
	{
		c =  a*b;
		cout << c << endl;
	}
	else if (d == '/')
	{
		if (b == 0)
		{
			cout << "error"<<endl;
		}
		else
		{
			c = a / b;
			cout << c << endl;
		}
	}
	else
	{
		cout << "error"<<endl;
	}
	while (i = 1)
	{
		cin >> d;
		cin >> b;
		if (d == '+')
		{
			c = c + b;
			cout << c << endl;
		}
		else if (d == '-')
		{
			c = c - b;
			cout << c << endl;
		}
		else if (d == '*')
		{
			c = c*b;
			cout << c << endl;
		}
		else if (d == '/')
		{
			if (b == 0)
			{
				cout << "error" << endl;
			}
			else
			{
				c = c / b;
				cout << c << endl;
			}
		}
		else if (d == 'e')
		{
			break;
		}
		else
		{
			cout << "error" << endl;
		}
	}

	cout << "final : " << c<<endl;
}