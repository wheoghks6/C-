#include<iostream>
#include<iomanip>
using namespace std;

void grade(int [][4]);
void average(int [][4]);

int main()
{
	int studentgrade[3][4] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };

	cout << setw(19) << "[0]" << setw(4) << "[1]" << setw(4) << "[2]" << setw(4) << "[3]\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "stduentGrades[" << i << "]";
		for (int j = 0; j < 4; j++)
		{
			cout << setw(4) << studentgrade[i][j];
		}
		cout << "\n";
	}

	grade(studentgrade);
	average(studentgrade);
}


void grade(int t[][4])
{
	int low = 100;
	int max = 0;
	cout << "Lowest grade : ";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (t[i][j] < low)
				{
					low = t[i][j];
				}
				if (t[i][j] > max)
				{
					max = t[i][j];
				}
			}
		}
		cout << low << endl << "Highest grade: " << max << endl;
		
}


void average(int t[][4])
{
	int a[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i] = a[i] + t[i][j];
		}
		cout << "The average grade for student "
			<< i << " is " << ((double)a[i] / 4) << endl;
	}

}