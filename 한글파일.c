#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* parr;
	int i;
	parr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("arr[%d] �� �ּҰ� : %p ", i, &arr[i]);
		printf("(parr + %d) �� �� : %p ", i, (parr + i));
	}

	//�迭�� ù��° �ּҰ�
	//�迭�� ����

	return 0;
}
