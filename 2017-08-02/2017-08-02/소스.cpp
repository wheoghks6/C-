#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char a[101];
	int s = 1;
	cin.getline(a, sizeof(a));
	int k = strlen(a) - 1;

	for (int i = 0; i < k; i++, k--)
	{

		if (a[i] != a[k])
		{
			s = 0;
			break;
		}
		

	}
	cout << s;
}