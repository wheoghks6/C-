#include<iostream>
#include<string>
using namespace std;

int main()
{
	int k;
	char a[100];
	
	cin.get(a,sizeof(a));
	
	k = strlen(a);

		for (int i = k-1; i >= 0; i--)
		{
			cout << a[i];
		}

}