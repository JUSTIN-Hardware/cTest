#include <stdio.h>


int main()
{
    unsigned char rx_buffer[11] = {0x49, 0x20, 0x43, 0x41, 0x4E, 0x20, 0x44, 0x4f, 0x20, 0x49, 0x54}; // I CAN DO IT

    printf("reveiced data :");
    for(int i =0; i<12; i++){
        printf("%c",rx_buffer[i]);   
    }
    printf("\n");

    return 0;
}



