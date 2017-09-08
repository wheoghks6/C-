#include<iostream>
#include<iomanip>
using namespace std;

void bubbleSort(int *, const int);
void swap(int*const, int *const);

int main()
{
	const int arraySize = 10;
	int a[arraySize] = { 2, 6, 4, 8, 10 ,12, 89, 68, 45, 37 };

	cout << "Data items in original order\n";

	for (int i = 0; i < arraySize; i++)
	{
		cout << setw(4) << a[i];
	}
	bubbleSort(a, arraySize);

	cout << "\nData items in ascending order\n";

	for (int j = 0; j < arraySize; j++)
	{
		cout << setw(4) << a[j];
	}
	cout << endl;
	return 0;
}


void bubbleSort(int *array, const int size)
{

	for (int pass = 0; pass < size - 1; pass++)
	{
		for (int k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap(&array[k], &array[k + 1]);
			}
		}
	}
}

void swap(int * const element1Ptr, int * const element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;

	
}