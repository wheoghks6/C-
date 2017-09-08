#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char **array;

	array = (char**)malloc(sizeof(char*) * 10);

	for (int k = 0; k < 10; k++)
		array[k] = (char *)malloc(sizeof(char) * 10);

	array[0] = "cat";
	array[1] = "dog";
	array[2] = "category";
	array[3] = "document";
	array[4] = "donation'";

	char *ptr;

	int i = 0;
	int u = 5;
	while (1) {
		printf("Menu\n1. Insert\n2. Display\n3. Delete\n4. Search\n5. Exit\n:");
		scanf_s("%d", &i);
		char c = '\0';

		switch (i) {
		case 1:
			printf("type the string\n:");
			scanf("%s", array[u]);
			u++;
			break;

		case 2:
			for (int counter = 0; counter <= u; counter++) {
				if (array[counter] = '\0')
					break;
				else
					printf("%c", array[counter]);
			}
			break;

		case 3:
		case 4:
			printf("type the pattern\n:");
			scanf("%s", &c);
			for (int z = 0; z <1000; z++)
				ptr = strstr(array[z], c);
			printf("\n");
			break;
		case 5:
			printf("good bye\n");
			return 0;
		}
	}
}