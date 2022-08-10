#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Point
{
    int x;
    int y;
};

void setCoord(struct Point* pPoint)
{
    pPoint -> x = rand() % 11;
    (*pPoint).y = rand() % 11;
}

int main(void)
{
    srand(time(NULL));

    int input = 0;
    scanf("%d", &input);

    struct Point* arr = (struct Point*)malloc(sizeof(struct Point) * input);

    for (int i = 0; i < input; i++)
    {
        setCoord(&arr[i]);
    }

    for (int i = 0; i < input; i++)
    {
        printf("%d: (%d,%d)  ", i, arr[i].x, arr[i].y);
    }

    for (int i = input - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j].y < arr[j + 1].y) {
                struct Point temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else if (arr[j].y == arr[j + 1].y)
            {
                if (arr[j].x < arr[j + 1].x)
                {
                    struct Point temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    printf("\n");

    for (int i = 0; i < input; i++)
    {
        printf("%d: (%d,%d)  ", i, arr[i].x, arr[i].y);
    }

    free(arr);
    return 0;
}