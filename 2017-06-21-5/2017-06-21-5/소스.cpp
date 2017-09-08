#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char a[1001];
	int k;
	char z;
	cin.getline(a, sizeof(a));

	k = strlen(a);

	for (int i = 0; i < k; i++)
	{
		if ('D' <= a[i] && a[i] <= 'Z')
		{
			z = a[i] - 3;
			cout << z;
		}
		else if ('A' <= a[i] && a[i] <= 'C')
		{
			z = a[i] -'A'+'W'+1;
			cout << z;
		}
	}
	cout << '\n';
}