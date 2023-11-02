#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
int start_size;
do
{
 start_size =get_int("start size :\n ");
}
while (start_size < 9);




    // TODO: Prompt for end size
int end_size;
do
{
    end_size=get_int("end size: \n");
}
while (end_size<start_size);

    // TODO: Calculate number of years until we reach threshold
int current_size = start_size;
int years_passed = 0;
while (current_size< end_size )
{
    current_size= round (current_size + current_size/3 - current_size/4);
    years_passed++;

}

    // TODO: Print number of years
printf("years: %i\n ", years_passed);
}
