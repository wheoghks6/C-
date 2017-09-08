#include<iostream>

using namespace std;

int my_strlen(const char* src);
char* my_strcpy(char* dst, const char* src);

int main()
{
	const int max = 100;
	char dest[max];
	char source[max];
	cin.getline(source, max);
	cout << my_strlen(source) << endl;
	cout << my_strcpy(dest, source) << endl;
	return 0;
}

int my_strlen(const char* src)
{
	int k = 0;

	for (int i = 0; ; i++)
	{
		if (src[i] > 0)
		{
			k++;
		}
		else
		{
			break;
		}
	}
	return k;
}

char* my_strcpy(char* dst, const char* src)
{
	for (int i = 0;i<100; i++)
	{
		if (*(src+(1*i)) > 0)
		{
			*(dst + (1*i))= *(src + (1*i));
		}
		else
		{
			dst = NULL;
		}
		
	}
	return dst;
}