#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	char sentence[] = "This is a sentence with 7 tokens";
	char a[100];
	char *tokenPtr;

	cout << "The string to be tokenized is : \n" << sentence
		<< "\n\nThe tokens are:\n\n";
	strcpy(a, sentence);
	tokenPtr = strtok(sentence," ");

	while (tokenPtr != NULL)
	{
		cout << tokenPtr << '\n';
		tokenPtr = strtok(NULL, " ");
	}
	
	cout << "\n\n";
	for (int i = 0; a[i] > 0; i++)
	{
		if (a[i] == ' ')
		{
			cout << "\n";
		}
		else
			cout << sentence[i];
	}


	cout << "\nAfter strtok, sentence = " << sentence << endl;

	return 0;
}