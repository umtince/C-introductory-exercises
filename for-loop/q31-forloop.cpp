#include <stdio.h>

int main()
{
	int row,space;
	int k = 1;
	int j = 1;
	int a = 1;
	
	scanf("%d",&row);
	
	space = row -1;
	
	
	for( k = 1; k<= row; k++)
	{
		for( int j = 0; j < space; j++)
		{
			printf(" ");
		
		}
		space--;
		
		for(int star = 1; star <= (2*k)-1 ; star++)
		{
				printf("*");
		
		}
		
		printf("\n");
			
	}
	
		k -= 2;
		space = row-1;
		
			
	for(k ; k >= 0; k--)
	{
		for(j = a ; j > 0; j--)
		{
			printf(" ");
		
		}
		 
		for(int star = 1; star <= (2*k)-1 ; star++)
		{
				printf("*");
		
		}
		a+=1;
		printf("\n");
	}
	
	return 0;
}
