//CHALLENGE = LOOPS
//for input = 4
/*
01
0101
010101
01010101
*/


#include<stdio.h>
main()
{
	int i,j,n;
	//1. take input from user
	printf("Enter the level of stairs: \n");
	scanf("%d",&n);
	//2. printing the pattern
	for(i=1;i<=n;i++)//for lines
	{
		for(j=1;j<=i;j++)//for characters per line
		{
		    printf("01");
	    }
		printf("\n");
	}
	return 0;
}
