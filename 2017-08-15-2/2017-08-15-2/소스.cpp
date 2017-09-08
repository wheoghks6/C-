#include<iostream>
using namespace std;

int main()
{
	int h;
	int m;
	cin >> h >> m;

	if (m >= 45)
	{
		m = m - 45;
	}
	else
	{
		if (h > 0)
		{
			h = h - 1;
		}
		else if(h==0)
		{
			h = 23;
		}
		m = m + 60 - 45;
	}

	cout << h << " " << m;
}