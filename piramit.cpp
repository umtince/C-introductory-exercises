#include <stdio.h>

//Question 9 https://www.w3resource.com/c-programming-exercises/for-loop/index.php

int main()
{
   
  	int satir;
  	scanf("%d",&satir);
		
   for(int i=1; i<= satir; i++)  //satýr 
   {
   	for(int yildiz=1; yildiz<= i; yildiz++)
   	{
   		printf("*");
	}
	printf("\n");
   }
   
   
   return 0;
   
}


