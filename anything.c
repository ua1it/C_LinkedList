#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include "str.h"


int main() {
	char str1[20];
	char str2[20];
	scanf("%s", str1);
	scanf("%s", str2);
	if (compare(str1, str2)) {
		printf("%s �� %s �� ���� ���� �Դϴ�. \n", str1, str2);
	}
	else {
		printf("%s �� %s �� �ٸ� ���� �Դϴ�. \n", str1, str2);
	}
	return 0;
}