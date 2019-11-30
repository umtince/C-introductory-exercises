#include <stdio.h>

// Question 34   for-loop https://www.w3resource.com/c-programming-exercises/for-loop/index.php

int main()
{
	int start, end, i,counter;
	
	
	puts("Input starting number of range:");
	scanf("%d",&start);
	puts("Input ending number of range:");
	scanf("%d",&end);
	printf("The prime number between %d and %d are ",start,end);

		
		for( i = start; i <=end; i++)
		{
			counter = 0;
			
			for(int k=2; k <= i/2; k++)
			{
				if(i % k == 0)
				{
					counter++;
					break;
				}	
			}
			
			if(counter == 0 && i !=1 )
			{
				printf("%d ",i);
			}
		}
		
	
	return 0;
}
