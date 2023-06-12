#include <cs50.h>
#include <stdio.h>
/*
Need to fix sum function
Author: Jordon Murray
*/
int main(void)
{
    long num;
    int count = 1;
    int flag = 1;
    long copy;
    int first;
    long product;
    int sum_a = 0;
    do
    {
        num = get_long("Number: ");

    } while (num < 0);
    copy = num;
    while (copy >= 10)
    {

        if (flag == 1)
        {
            sum_a += copy % 10;
            copy /= 10;
            count++;
            flag = 0;
        }
        else
        {
            product = (copy % 10) * 2;
            if (product >= 10)
            {
                sum_a += ((product % 10));
                product = (product) / 10;
                sum_a += product;
                
            }
            else
            {
                sum_a += product;
            }
            copy /= 10;
            count++;
            flag = 1;
        }
        if (copy < 10)
        {
            sum_a += ((copy % 10) * 2);
        }
    }
    if ((count != 13 && count != 15 && count != 16) || sum_a % 10 != 0)
    {
        printf("INVALID\n");
    }
    if (count == 13 && ((sum_a) % 10 == 0))
    {
        printf("VISA\n");
    }
    else
    {
        if (count == 15 && ((sum_a) % 10 == 0))
        {
            printf("AMEX\n");
        }
        else
        {
            if (count == 16 && ((sum_a) % 10 == 0))
            {
                if (copy == 4)
                {
                    printf("VISA\n");
                }
                if (copy == 5)
                {
                    printf("MASTECARD\n\n");
                }
            }
        }
    }
}
