#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main() {
	double n1, n2, n3, n4, n5, n6;
	double sum, k = 1;
	double count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;

	while (true) {
		cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
		sum = n1 + n2 + n3 + n4 + n5 + n6;
		if (sum == 1)
		{
			break;
		}
		else cout << "다시 입력해주십시오.\n";
	}

	cout << setw(8) << "#iters" << setw(9) << "1" << setw(8) << "2" << setw(8) << "3" 
		<< setw(8) << "4" << setw(8) << "5" << setw(8) << "6" << endl;

	srand(static_cast <unsigned int>(time(0)));

	for (int i = 1; i<=20; i++) {
		for (int i = 0; i < 50; i++) {
			k = rand() % 10000 + 1;
			if (k < 10000 * n1) count1++;
			else if (k < 10000 * (n1 + n2)) count2++;
			else if (k < 10000 * (n1 + n2 + n3)) count3++;
			else if (k < 10000 * (n1 + n2 + n3 + n4)) count4++;
			else if (k < 10000 * (n1 + n2 + n3 + n4 + n5)) count5++;
			else count6++;
		}

		cout << fixed << setprecision(3);
		cout << setw(8) << i * 50 << setw(8) << ":" << setw(8) << count1 / 50 << setw(8) << count2 / 50 << setw(8) << count3 / 50 \
			<< setw(8) << count4 / 50 << setw(8) << count5 / 50 << setw(8) << count6 / 50 << "\n";
		count1 = 0; count2 = 0; count3 = 0; count4 = 0; count5 = 0; count6 = 0;
	}

}