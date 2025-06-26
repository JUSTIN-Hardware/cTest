#include <stdio.h>

#define BUFFER_SIZE 10

int get_array_num(int arr[], int size);
void array_input(int array[], int array_size);


int main()
{
   
    int array[BUFFER_SIZE];
    int size = 0;
    int sum = 0;
    int averge = 0;
   
    printf("array size input(max %d)",BUFFER_SIZE);
    scanf("%d",&size);

    if(size>BUFFER_SIZE|| size<=0)
    {
    printf("error : array size fix 1~%d.\n",BUFFER_SIZE);
    return 1;
    }

    array_input(array,size);

    sum = get_array_num(array,size);

    averge = sum/size;

    printf("buffer sum :%d\n",sum);
    printf("buffer averge :%d\n",averge);
  
    return 0;
   

}


void array_input(int array[],int array_size)
{
   
    printf("input array's size : %d\n",array_size);
    for(int i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("inputed array value : ");
    for(int i=0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

}

int get_array_num(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i <size; i++)
    {
        sum+=arr[i];
    }    
    return sum;
}


