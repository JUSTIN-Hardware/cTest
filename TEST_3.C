#include <stdio.h>

#define BUFFER_SIZE 10

unsigned char receive_array(char array[], int size);

int main()
{
    char array[BUFFER_SIZE];
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
    
    receive_array(array,size);


}



unsigned char receive_array(char array[], int size)
{
    printf("input array's size : %d\n",size);
    for(int i=0; i<size; i++){
            scanf("%d",&array[i]);
        }

    printf("inputed array value : ");
        for(int i=0; i < size; i++){
            printf("%d ",array[i]);
        }

        printf("\n");

}