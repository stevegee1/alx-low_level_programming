// Online C compiler to run C program online
#include "main.h"
#include <stdio.h>


void simple_print_buffer(char* buffer, unsigned int size)
{
    unsigned int i = 0;

    while (i < size)
    {
        if (i != 0 && i % 10 == 0)
        {
            printf("\n");
        }
        printf("0x%02x ", buffer[i]);
        i++;
    }
    printf("\n");
}
int main(void)
{
    char buffer[98] = {0x00};
    
    simple_print_buffer(buffer, 98);
    _memset(buffer,0x01,95);
       simple_print_buffer(buffer, 98);


    return 0;
}


