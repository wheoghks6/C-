#include<iostream>
#include<iomanip>

using namespace std;

void printStudentInfo(char *const[], const int *, int);
void printGrade(const int *, const int *, const int*, int);
int idxForStudent(const int*, const int, int);
int idxForStudent(char*const[], const int, char*);

int main() {
	const int STUDENT_MAX = 30;
	char * stdName[STUDENT_MAX] = { "" };
	int stdNum[STUDENT_MAX] = { 0 };
	int gradeKor[STUDENT_MAX] = { 0 };
	int gradeMath[STUDENT_MAX] = { 0 };
	int gradeEng[STUDENT_MAX] = { 0 };

	stdName[0] = "Kim Chulsoo";
	stdNum[0] = 12170001;

	int a = idxForStudent(stdName, STUDENT_MAX, "Kim Chulsoo");
	printStudentInfo(stdName, stdNum, a);
	printGrade(gradeKor, gradeMath, gradeEng, a);
	return 0;
}

void printStudentInfo(char*const name[], const int * num, int idx)
{
	cout << setw(15) << "Name : " << name[idx] << endl;
	cout << setw(15) << "Student No.:" << num[idx] << endl;
}

void printGrade(const int *kor, const int * math, const int *eng, int idx)
{
	cout << setw(15) << "KOREAN: " << kor[idx] << endl;
	cout << setw(15) << "MATH: " << math[idx] << endl;
	cout << setw(15) << "ENGLISH: " << eng[idx] << endl;
}

int idxForStudent(const int * stdnum, const int size, int student)
{
	for (int i = 0; i < size; i++)
	{
		if (stdnum[i] == student)
		{
			return i;
		}
	}
	return -1;
}


int idxForStudent(char * const std_name[], const int size, char * name)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(std_name[i], name) == 0)
		{
			return i;
		}
	}
	return -1;
}