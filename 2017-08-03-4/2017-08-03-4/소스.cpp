#include<iostream>
using namespace std;

int main()
{
	int i,a;
	int b;
	int soo[1000];
	cin >> a;

	for (i = 0; ; i++)
	{
		cin >> soo[i];
		if (soo[i] == 0)
		{
			b = i;
			break;
		}
	}
	for (int i = 0; i < b; i++)
	{
		if (soo[i] % a == 0)
		{
			cout << soo[i] << " is a multiple of "
				<< a <<"."<< endl;
		}
		else
		{
			cout << soo[i] << " is NOT a multiple of "
				<< a<<"."<<endl;
		}
	}
}