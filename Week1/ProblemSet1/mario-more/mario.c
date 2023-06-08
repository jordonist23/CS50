#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int l;
     do
     {
        /* code */
          l = get_int("Height: ");
     } while ( l <= 0 || l > 8);
     
   
     
     int w;
     int s = l;
    for (int i = 0; i<l; i++)
    {
        w = i+i;
        
        for (int h = s;h>0;h--)
        {
            printf(" ");
        }
        s--;
        
        for (int j = i;j<w+1;j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = i;j<w+1;j++)
        {
            printf("#");
        }
        
         printf("\n");
    }
   
}