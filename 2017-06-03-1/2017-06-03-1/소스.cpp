#include<iostream>
#include<iomanip>

using namespace std;

class Student {
public:
	char * name;
	int stdNum;

	//Student();
	void initialize(char *, int, int, int, int);
	void printStudentInfo();
	void printGrade();
	void inputGrade(int, int, int);
	double average();

private:
	int gradeKor;
	int gradeMath;
	int gradeEng;

};

void Student::initialize(char*stdName, int number, int kor, int math, int eng)
{
	name = stdName;
	stdNum = number;
	gradeKor = kor;
	gradeMath = math;
	gradeEng = eng;
}
void Student::printStudentInfo()
{
	cout << setw(15) << "Name: " << name << endl;
	cout << setw(15) << "Student No.: " << stdNum << endl;
}
void Student::printGrade()
{
	cout << setw(15) << "KOREA" << gradeKor << endl;
	cout << setw(15) << "MATH: " << gradeMath << endl;
	cout << setw(15) << "ENGLISH: " << gradeEng << endl;
}

void Student::inputGrade(int kor, int math, int eng)
{
	gradeKor = kor;
	gradeMath = math;
	gradeEng = eng;
}
double Student::average()
{
	return ((gradeKor + gradeMath + gradeEng) / 3);
}


int main()
{
	double a;
	const int STD_MAX = 30;
	Student stdList[30];

	stdList[0].initialize("Kim Chulsoo", 12170001, 10, 20, 30);
	stdList[0].name = "Kim YoungHee";
	//stdList[0].gradeKor = 40;
	stdList[0].printStudentInfo();
	stdList[0].printGrade();
	a = stdList[0].average();
	cout <<setw(15)<< a<<endl;
	return 0;
}

int idxForStudent(const Student*list, const int size, int std_num)
{
	for (int i = 0; i < size; i++)
	{
		if (list[i].stdNum == std_num)
		{
			return i;
		}
	}
	return -1;
}

int idxForStudent(const Student*list, const int size, char * nameToFind)
{
	for (int i = 0; i < size; i++)
	{
		if (!strcmp(list[i].name, nameToFind))
		{
			return i;
		}
	}
	return -1;
}