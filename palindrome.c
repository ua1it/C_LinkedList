#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void palindrome(char* string);
int str_length(char* str);

void main() {
	char first[10];
	printf("> ");
	scanf("%s", first);
	//gets(first);

	char* pFirst = first;
	//printf("%s\n", pFirst);
	//printf("%d\n", sizeof(first));
	palindrome(pFirst);

}

void palindrome(char* string) {
	int length = str_length(string);
	/*printf("length: %d\n", length);*/
	
	for (int i = 0; i < length/2; i++)
	{
		/*printf("%c %c\n", string[i], string[length - i - 1]);*/
		if (string[i] != string[length - i - 1]) {
			printf("not palindrome.\n");
			exit(1);
		}
	}
	printf("This string is palindrome.\n");
}

int str_length(char* str) {
	int i = 0;
	while (str[i]) {
		i++;
	}
	return i;
}