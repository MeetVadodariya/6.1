//Q.4 Write a Program to print odd numbers from N to 1 using a while loop

#include <stdio.h>
main() 
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (N >= 1) 
	{
        if (N % 2 != 0) 
		{
            printf("%d ", N);
        }
        N--;
    }
}
