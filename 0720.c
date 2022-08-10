#include <stdio.h>

//void add(int *num) {
//	 *num += 1;
//}
//
void plus(int *arr) {
	for (int i = 0; i < 5; i++)
	{
		arr[i] += 1;
	}
}
//
//void plus2() {
//
//}


void printhello(); // prototype
int add(int a);

void main() {
	//int a = 5;
	//int* pa = &a;

	///*printf("%d\n", a);
	//add(pa);
	//printf("%d\n", a);*/

	int arr[5] = { 1,2,3,4,5 };
	plus(arr);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	//int arr[3][2];



	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//
	////int(*parr)[10] = &arr; // arr 그 자체의 주소를 가리키는 용도
	//int* parr = arr; // arr[0]의 주소를 가리키는 용도

	//printf("%d\n", *(parr + 3)); // *parr[3]

	//int arr2[2][3] = { {1, 2, 3}, {4, 5, 6} };

	//int (*parr2)[3] = arr2;

	///*printf("%d\n", (*(*(parr2 + 1)+0)));*/

	//printf("%d\n", parr2[1][0]);


	printhello();
	printf("%d\n", add(5));
}

void printhello() {
	printf("Hello!\n");
}

int add(int a) {
	return ++a;
}