#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	
	/*int data[5] = { 1,2,3,4,5 };
	int sum = 0;
	int* p = &data;

	for (int i = 0; i < 5; i++) {
		sum += *p;
		p++;
	}
	printf("sum: %d\n", sum);

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int sum2 = 0;
	int* arr[5] = { &a,&b,&c,&d,&e };
	for (int i = 0; i < 5; i++)
	{
		sum2 += *arr[i];
	}
	printf("sum2: %d\n", sum2);


	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* parr;
	int i;
	parr = &arr2[0];
	for (i = 0; i < 10; i++) {
		printf("arr[%d] 의 주소값 : %p ", i, &arr2[i]);
		printf("(parr + %d) 의 값 : %p ", i, (parr + i));
	}*/

	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printf("%d \n", sizeof(arr));
	printf("%d %d\n", sizeof(arr[0]), sizeof(arr[0][0]));
	printf("%d %d\n", sizeof(arr), sizeof(arr[0]));


	return 0;
}