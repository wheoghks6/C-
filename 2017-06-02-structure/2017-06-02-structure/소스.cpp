#include<iostream>
#include<iomanip>
using namespace std;

struct Student {
	char * name;
	int stdNum;
	int gradeKor;
	int gradeMath;
	int gradeEng;
};

void printStudentInfo(const Student *, int);
void printGrade(const Student *, int);
int idxForStudent(const Student *, const int, int);
int idxForStudent(const Student *, const int, char *);


int main()
{
	const int sizeMax = 30;
	Student stdList[sizeMax] = { {"",12170000,0,30,0} };

	stdList[0].name = "Kim Chulsoo";
	stdList[0].stdNum = 12170001;
	stdList[0].gradeKor = 10;
	stdList[0].gradeMath = 20;
	stdList[0].gradeEng = 30;

	int a;
	a = idxForStudent(stdList, sizeMax, "Kim Chulsoo");
	//a = idxForStudent(stdList,sizeMax,12170001);
	printStudentInfo(stdList, a);
	printGrade(stdList, a);


	return 0;
}


void printStudentInfo(const Student * student, int idx)
{
	cout << setw(15) << "Name: " << student[idx].name << endl;
	cout << setw(15) << "Student No.: " << student[idx].stdNum << endl;
}

void printGrade(const Student * student, int idx)
{
	cout << setw(15) << "KOREA:" << student[idx].gradeKor << endl;
	cout << setw(15) << "MATH: " << student[idx].gradeMath << endl;
	cout << setw(15) << "ENGLISH: " << student[idx].gradeEng << endl;
}


int idxForStudent(const Student * student, const int size, int std_num)
{
	for (int i = 0; i < size; i++) {
		if (student[i].stdNum == std_num)
			return i;
	}

	return -1;
}

int idxForStudent(const Student * student, const int size, char * name)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(student[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
