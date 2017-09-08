#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//malloc함수를 사용하기 위한 헤더파일
#include<string.h>
//string관련 함수를 사용하기 위한 헤더파일

//20바이트 동적메모리 할당을 쉽게 하기위해 Q를 20으로 define.
#define Q 20
#define P 20
//각각 함수의 프로토타입 선언
char Insert(char *a);
void Display(char **a);
int Delete(char **a);
void searching(char **a);

int main() {
	int sc = 1; //switch문에 들어갈 변수
	int add = 5;
	int del = 0;
	char a[Q];
	char temp[Q];
	char **pp; //이중포인터를 이용해서 동적메모리 할당, 2차원배열 생성
			   //동적 메모리 할당
	pp = (char **)malloc(Q * sizeof(char*));
	for (int i = 0; i < Q; i++) {
		pp[i] = (char *)malloc(P * sizeof(char));
	}
	//strcpy함수를 이용해서 배열의 행에있는 단어에 복사, 대입(바로 대입하면 수정 할 수 없음)
	strcpy(pp[0], "cat");
	strcpy(pp[1], "dog");
	strcpy(pp[2], "category");
	strcpy(pp[3], "document");
	strcpy(pp[4], "donation");

	while (sc != 5) {
		printf("Menu\n");
		printf("1. Insert\n");
		printf("2. Display\n");
		printf("3. Delete\n");
		printf("4. Search\n");
		printf("5. Exit\n:");

		scanf("%d", &sc);
		switch (sc) {
		case 1:
		{
			Insert(pp[add]);
			add++;
			printf("%d", add);
			printf("\n");
			break;
		}
		case 2:
		{
			Display(pp);
			printf("\n");
			printf("%d", add);
			break;
		}
		case 3:
		{
			del = Delete(pp);
			if (del < Q) {
				for (int i = del; i < sizeof(pp); i++) {
					if (pp[i][0] > 0) {
						strcpy(temp, pp[i + 1]);
						strcpy(pp[i], temp);
					}
					else {
						break;
					}
				}
			}
			add--;
			printf("%d", add);
			printf("\n");
			break;
		}
		case 4:
		{
			searching(pp);
			printf("\n");
			break;
		}
		case 5:
		{
			break;
		}
		}
	}
	//메모리 해제
	for (int i = 0; i < Q; i++) {
		free(pp[i]);
	}
	free(pp);
	printf("good bye\n");
}

//함수 작성
char Insert(char *a) {
	char string[Q];
	printf("type the string\n:");
	scanf_s("%s", string, sizeof(string));
	strcpy(a, string);
	return a;
}

void Display(char **a) {
	printf("The registered string is\n -> ");
	for (int i = 0; i<Q; i++) {
		if (a[i][0] >0) {
			if (a[i + 1][0] > 0) {
				printf("%s, ", a[i]);
			}
			else {
				printf("%s ", a[i]);
			}
		}
		else {
			break;
		}
	}
	printf("\n");
	return;
}

int Delete(char **a) {
	char b[20];
	int l;
	int i;
	printf("type the string\n :");
	scanf_s("%s", b, sizeof(b));
	for (i = 0; i < Q; i++) {
		l = strcmp(a[i], b);
		if (l == 0) {
			return i;
		}
	}
}

void searching(char **a) {
	char b[Q];

	printf("type the pattern\n:");
	scanf_s("%s", b, sizeof(b));
	printf("serch result\n: ");
	for (int i = 0; i<Q; i++) {
		if (strstr(a[i], b) != NULL) {
			printf("%s ", a[i]);
		}
	}
}