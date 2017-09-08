#include<iostream>
using namespace std;

int square(int x)
{
	cout << "call int type square" << endl;
	return (x*x);
}
double square(double x)
{
	cout << "call double type square" << endl;
	return (x*x);
}

int main() {

	int x = 3;
	double y = 2.5;
	cout << square(x) << endl;
	cout << square(y) << endl;

}