//
// Created by 채민균 on 2017. 6. 14..
//

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100][100] = { 0, }; //n범위 몰라서 걍 크게 잡고 0으로 초기화 시킴
	if (n == 1) {
		cout << 1 << "\n";
		return 0;
	}
	else if (n == 2) {
		cout << 1 << "\n";
		cout << 1 << " " << 1 << "\n";
		return 0;
	}
	else {
		arr[0][0] = 1;
		arr[1][0] = 1;
		arr[1][1] = 1;
		for (int i = 2; i < n; ++i) {
			int count = 1;//같은 숫자 카운팅
			int index = 0;//배열에 카운트 수랑 숫자 넣어주기 위함
			for (int j = 0; j < 999; ++j) {
				if (arr[i - 1][j] == 0) {
					break;//0이 나오면 for문 탈출
				}
				if (arr[i - 1][j] == arr[i - 1][j + 1]) {
					++count;
				}
				else {
					arr[i][index] = count;
					arr[i][index + 1] = arr[i - 1][j];
					index += 2;
					count = 1;//카운트를 다시 1로 초기화
				}
			}
		}

		//출력하는 부분
		cout << 1 << "\n";
		cout << 1 << " " << 1 << "\n";
		for (int i = 2; i < 1000; ++i) {
			bool isValue = false;
			for (int j = 0; j < 1000; j += 2) {
				if (arr[i][j] != 0) {
					cout << arr[i][j] << " " << arr[i][j + 1] << " ";
					isValue = true;
				}
				else {
					break;
				}
			}
			if (isValue) {
				cout << "\n";
			}
			else {
				break;
			}
		}
	}
	return 0;
}