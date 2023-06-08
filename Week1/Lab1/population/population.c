#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year = 0;
    int start_size;
    int end_size;
    // TODO: Prompt for start size
    do
    {
        /* code */
        start_size = get_int("Start_size: ");
    } while (start_size <= 9);
    // TODO: Prompt for end size
    do
    {
        /* code */
        end_size = get_int("End Size: ");
    } while (end_size <= start_size);
    // TODO: Calculate number of years until we reach threshold
    while (start_size < end_size)
    {
        year += 1;
        start_size = start_size + (start_size) / 3 - (start_size) / 4;
    }
    // TODO: Print number of years
    printf("Years: %d\n", year);
}
