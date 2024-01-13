#include <stdio.h>
#include <stdlib.h>

void pattern1_printer(int num)
{
    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void pattern2_printer(int num)
{
    for(int i = 1; i <= num; i++)
    {
        for(int j = num; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

}


int main()
{
    pattern1_printer(5);
    pattern2_printer(5);
}