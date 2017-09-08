#include<iostream>
#include<iomanip>

using namespace std;

void modifyArray(int[], int);
void modifyElement(int);

int main()
{
	const int arraySize = 5;
	int a[arraySize] = { 0,1,2,3,4 };

	cout << "Effects of passing entire array by raference :"
		<< "\n\nThe value of original array are : \n";


	for (int i = 0; i < arraySize; i++)
	{
		cout << setw(3) << a[i];
	}
	cout << endl;
	modifyArray(a, arraySize);
	cout << "The values of the modified array are :\n";

	for (int j = 0; j < arraySize; j++)
	{
		cout << setw(3) << a[j];
	}


	cout << "\n\n\n"
		<< "Effects of passing array element by value :"
		<< "\n\nThe value of a[3] is" << a[3] << '\n';

	modifyElement(a[3]);

	cout << "The value of a[3] is " << a[3] << endl;

	return 0;
}

void modifyArray(int b[], int sizeOfArray)
{
	for (int k = 0; k < sizeOfArray; k++)
	{
		b[k] *= 2;
	}

}

void modifyElement(int e)
{
	cout << "Value in modifyElement is"
		<< (e *= 2) << endl;
}