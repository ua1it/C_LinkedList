#include <stdio.h>

int main(void)
{

	
	/*int arr[3] = { 1, 2, 3 };
	int(*parr)[3] = &arr;
	int* parr2 = &arr;
	printf("arr : %p \n", arr);
	printf("parr : %p \n", parr);
	printf("parr2 : %p \n", parr2);*/

	//int i, arr_len;
	//int num01 = 10, num02 = 20, num03 = 30;
	//int* arr[3] = { &num01, &num02, &num03 }; // int형 포인터 배열 선언  
	//arr_len = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < arr_len; i++)
	//{
	//	printf("%d\n", *arr[i]);
	//}
	//int arr[3] = { 1, 2, 3 };
	//int* parr;
	//parr = arr;
	///* parr = &arr[0]; 도 동일하다! */
	//printf("arr[1] : %d \n", arr[1]);
	//printf("parr[1] : %d \n", parr[1]);

	int arr[3][2] = {
			{11, 22},
			{33, 44},
			{55, 66},
	};

	int(*pointer)[2] = arr;

	printf("%d\n", **pointer);
	printf("%d\n", *(*pointer + 1));

	printf("%d\n", *(*(pointer + 1) + 0)); // + 0 은 생략 가능
	printf("%d\n", *(*(pointer + 1) + 1));

	printf("%d\n", *(*(pointer + 2) + 0)); // + 0 은 생략 가능
	printf("%d\n", *(*(pointer + 2) + 1));

	printf("%d\n", pointer[0][0]);
	printf("%d\n", pointer[0][1]);
	printf("%d\n", pointer[1][0]);
	printf("%d\n", pointer[1][1]);
	printf("%d\n", pointer[2][0]);
	printf("%d\n", pointer[2][1]);

	int(*pointer2)[3][2] = &arr;
	printf("%d\n", (*pointer)[0]);


	return 0;
}