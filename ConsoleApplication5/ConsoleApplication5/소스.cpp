#include<iostream>
#include<string>
using namespace std;

int main()
{

	int k;
	char a[100];

	cin >> a;

	k = sizeof(a);

	for (int i=0; a[i]>0; i++)
	{
		cout << a[i];
		if (i % 2 == 1)
		{
			cout << "\n";
		}
	}
	cout << "\n";

}