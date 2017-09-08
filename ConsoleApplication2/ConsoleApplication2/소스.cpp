#include <iostream>
using namespace std;

void passByRefer(int& a) {
	a = 5;
}

void passByValue(int a) {
	a = 5;
}

void passByPointer(int* a) {
	*a = 5;
}

//void passByArray(int a[]) {
//	a[0] = 5;
//}

void passByArray(int* a) {
	a[0] = 5;
}

int main() {
	int a = 3;
	passByRefer(a);
	cout << a << endl;

	a = 3;
	passByValue(a);
	cout << a << endl;

	a = 3;
	passByPointer(&a);
	cout << a << endl;

	int arr[1] = { 3 };
	passByArray(arr);
	cout << arr[0] << endl;

	arr[1] == *(arr + 1)
	
	return 0;
}