//Q.3 Write a Program to print 1 to N using a while loop.

#include <stdio.h>
main() 
{
    int N, num = 1;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    while (num <= N) 
	{
        printf("%d ", num);
        num++;
    }
}
