#include <stdio.h>
//Question 13 https://www.w3resource.com/c-programming-exercises/for-loop/index.php

int main()
{
	int satir;
	scanf("%d",&satir);
	int sayi=1;
	int bosluk=satir-1;
	
	for(int i=1; i<=satir; i++)
	{
		for(int a=bosluk; a>=1; a--)
		{
			printf(" ");
		}
		
		for(int j=1;j<=i;j++)
		{
			printf("%d ",sayi);
			sayi++;
		}
		printf("\n");
		bosluk--;
	}


	
   return 0;
}
