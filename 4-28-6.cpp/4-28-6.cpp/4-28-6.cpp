#include<iostream>

using namespace std;

template<typename T>

T square(T x)
{
	return x*x;
}

int main()
{
	double num = -1;
	cin >> num;
	cout << square(num) << endl;

}