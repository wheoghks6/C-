#include<iostream>
using namespace std;

class student {
public:
	student();
	void printstudent();
	void printscore();
	void inputstudent(char*,int,int,int,int);

private:
	char *name;
	int num;
	int kor;
	int math;
	int eng;
};

student::student()
{
	num = kor = math = eng = 0;
}

void student::printstudent()
{
	cout << name << "\n" << num << "\n";
}

void student::printscore()
{
	cout << kor << "  " << math << "  " << eng<<"\n";
}

void student::inputstudent(char *a, int b, int c, int d , int e)
{
	char block[20];
	cout << "Name = "; cin.getline( a,20);
	name = a;
	cout << "num = "; cin >> b;
	num = b;
	cout << "kor = "; cin >> c;
	kor = c;
	cout << "math = "; cin >> d;
	math = d;
	cout << "eng = "; cin >> e;
	eng = e;
	cin.getline(block, 20);
}

int main()
{
	student T[10];
	char a[10][20];
	int b = 0, c = 0, d = 0, e = 0;

	

	cout << "학생 정보 입력 \n";

	for (int i = 0; i < 10; i++)
	{
		T[i].inputstudent(a[i], b, c, d, e);
	}
	cout << "\n\n 학생 정보 출력\n";
	for (int i = 0; i < 10; i++)
	{
		T[i].printstudent();
		T[i].printscore();
	}


}