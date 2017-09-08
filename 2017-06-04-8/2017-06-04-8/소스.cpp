#include<iostream>
#include<cstdlib>

void bubblesort(int [],const int x);
void binarysearch(const int [], const int x,int y);
using namespace std;

int main()
{
	int soo[100];
	int a, b, c;
	cin >> a>>b>>c;
	
	srand(a);

	for (int i = 0; i < b; i++)
	{
		soo[i] = rand() % 100;
	}

	bubblesort(soo,b);
	binarysearch(soo,b,c);

}

void bubblesort(int t[],const int x)
{
	int k = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x - 1; j++)
		{
			if (t[j] > t[j + 1])
			{
				k = t[j];
				t[j] = t[j + 1];
				t[j + 1] = k;
			}
		}
	}
	for (int i = 0; i < x; i++)
	{
		cout << t[i] << " ";
	}
	cout << "\n";
}
void binarysearch(const int t[],const int x,int y)
{
	int k = -1;
	for (int i = 0; i < x; i++)
	{
		if (t[i] == y)
		{
			k = i;
			break;
		}
	}
	cout << k;

}