#include <stdio.h>

#define BUFFER_SIZE 10

int get_array_num(int arr[], int size);



int main()
{
    int rx_buffer[BUFFER_SIZE] = {10,20,30,40,50,60,70,80,90,100}; 
    int sum = 0;
    int averge = 0;

    sum = get_array_num(rx_buffer,BUFFER_SIZE);
    averge = sum/10;

    printf("buffer sum :%d\n",sum);
    printf("buffer averge :%d\n",averge);
  
    return 0;
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


