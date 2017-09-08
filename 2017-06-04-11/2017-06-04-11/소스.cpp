#include<iostream>

using namespace std;

int main()
{
	char a[100];
	cin.get(a, sizeof(a));
	int k = strlen(a);

	for (int i = 0; i < k; i++)
	{
		cout << a[i];
		if (i % 2 == 1)
		{
			cout << "\n";
		}
	}

}