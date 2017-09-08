#include<iostream>

using namespace std;

void tryTomodifyArray(const int[]);

int main()
{
	int a[] = { 10,20,30 };

	tryTomodifyArray(a);

	cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';

	return 0;

}


void tryToModifyArray(const int b[])
{
	b[0] /= 2;
	b[1 /= 2;
	b[2] /= 2;



}