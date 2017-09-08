#include<iostream>
using namespace std;
#include<cstring>
#include<string>
#include<iomanip>
int main()
{
	char a[101];
	int b[26] = { 0 };
	int z;
	cin.getline(a, sizeof(a));
	int k = strlen(a);
	
	for (int i = 0; i < 26; i++)
	{
		b[i] = 0;
	}
	
	for (int i = 0; i < k; i++)
	{
		b[a[i] - 'a']++;
	}


	for (int j = 0; j < 26; j++)
	{
		cout << b[j] << " ";
	}
	cout << "\n";

	return 0;
}