//Q.5 Write a Program to print leap years between two given numbers using a while loop.

#include <stdio.h>
main() 
{
    int start_year, end_year;

    printf("Enter the start year: ");
    scanf("%d", &start_year);
    printf("Enter the end year: ");
    scanf("%d", &end_year);

    printf("Leap years between %d and %d are: ", start_year, end_year);
    while (start_year <= end_year) 
	{
        if (start_year%4==0) 
		{
            printf("%d ", start_year);
        }
        start_year++;
    }
}

