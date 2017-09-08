#pragma warning(disable: 4996)

#include <stdio.h> 
int fact1(int n); 
int fact2(int n); // ÆÑÅä¸®¾ó ÇÔ¼ö, Àç±Í 
int power(int a, int b); // Á¦°ö

struct student { 
	float math;
	int age;
};

void main() {
	int input, expo, i = 0;  
	struct student s1;  
	int a[5] = { 3, 6, 9, 12, 15 };
	double b = 100.3;
	void* pv;
	int* pa;
	int** ppa;  
	pa = a;  
	pa = &a[0]; 
	ppa = &pa; 
	pv = &b; 
	printf("%.1lf\n", *(double *)pv);
	pv = a; 
	printf("%d\n", *(int *)pv);

	s1.age = 5;  s1.math = 3.57;

	printf("%d %.1lf\n", s1.age, s1.math);

	printf("%d\n", *(*ppa + 3));

	for (int j = 0; j < 5; j++)
	{
		printf("%d\n", *(pa + j));
		printf("%d\n", pa[j]);  printf("\n");
	}

	while (i < 5) {
		printf("%d\n", a[i]);
		i++; }

	printf("%d\n", a[2]);

	scanf("%d", &input);
	scanf("%d", &expo);

	printf("%d\n", fact1(input));
	printf("%d\n", fact2(input));
	printf("%d\n", power(input, expo));
} 
int power(int a, int b) 
{ 
	int res = 1;  
	for (int i = 0; i < b; i++)  
		res = res * a;  
	
	return res; 
}

int fact2(int n) {
	if (n == 1 || n == 0)   
		return 1;  
	else   
		return n * fact2(n - 1);

}

int fact1(int n) {
	int res = 1; 
	for (int i = n; i > 0; i--)
		res = res * i;  
	
	return res; 
}
