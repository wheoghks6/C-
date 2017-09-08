#include<iostream>
using namespace std;


int main()
{
	int soo[3];
	int k;
	for (int i = 0; i < 3; i++)
	{
		cin >> soo[i];
	}
	cin >> k;
	soo[2] = soo[2] + k;
	int empt = soo[2] / 60;
	soo[2] = soo[2] % 60;
	soo[1] = soo[1] + empt;
	int s = soo[1] / 60;
	soo[1] = soo[1] % 60;
	soo[0] = soo[0] + s;

	for (; soo[0] >= 24; )
	{
		soo[0] = soo[0] - 24;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << soo[i] << " ";
	}


}