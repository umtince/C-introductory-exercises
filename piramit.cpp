#include <stdio.h>
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


