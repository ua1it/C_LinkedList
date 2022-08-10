#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* parr;
	int i;
	parr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("arr[%d] 의 주소값 : %p ", i, &arr[i]);
		printf("(parr + %d) 의 값 : %p ", i, (parr + i));
	}

	//배열의 첫번째 주소값
	//배열의 길이

	return 0;
}
