#include <stdio.h>

void double_values(int *arr, int size);

int main()
{
    int arr[5] = {1,2,3,4,5};

    double_values(arr,5);

    printf("배열 값 2배 결과 : \n");
    for(int i=0; i<5; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");

    return 0;
}



void double_values(int *arr, int size)
{
    for (int i =0; i<size; i++)
    {
        arr[i] *=2;
    }
}