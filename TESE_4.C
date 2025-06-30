#include <stdio.h>

int main()
{
    int num[10] = {1,2,3,65,5,6,7,8,0,9};
    int max = 0;
    int min = 0;

    for(int i=0; i<10; i ++)
    {
        if(max < num[i])
        {
            max = num[i];
        };

        if(min > num[i])
        {
            min = num[i];
        }
    }

    printf("max :%d",max);
    printf("min :%d",min);

    return 0;
}