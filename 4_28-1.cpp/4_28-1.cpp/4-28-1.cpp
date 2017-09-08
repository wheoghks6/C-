#include<iostream>

using namespace std;

void staticArrayInit(void);
void automaticArrayInit(void);


int main()
{
	cout << "First call to each function : \n";
	staticArrayInit();
	automaticArrayInit();

	cout << "\n\nSecond call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << endl;

	return 0;
}

void staticArrayInit(void)
{
	static int arrayl[3];

	cout << "\nValues in entering staticArrayInit : \n";

	for (int i = 0; i < 3; i++)
	{
		cout << "array[" << i << "] =" << arrayl[i] << "  ";
	}

	cout << "\nValues on exiting staticArrayInit\n";

	for (int j = 0; j < 3; j++)
	{
		cout << "arrayl[" << j << "] = " << (arrayl[j] = arrayl[j] + 5) << "  ";
	}

}

void automaticArrayInit(void)
{
	int array2[3] = { 1,2,3 };

	cout << "\n\nValues on entering autimaticArrayInit : \n";

	for (int i = 0; i < 3; i++)
	{
		cout << "array2[" << i << "] = " << array2[i] << "   ";
	}
	cout << "\nValues on exiting automaticArrayInit\n";

	for (int j = 0; j < 3; j++)
	{
		cout << "array2[" << j << "] = " << (array2[j] += 5) << "  ";
	}
}