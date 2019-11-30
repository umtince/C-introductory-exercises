#include <stdio.h>
int main()
{
	int satir;
	scanf("%d",&satir);
	int sayi=1;
	for(int i =1; i<= satir; i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",sayi);
		}
		printf("\n");
		sayi++;
	}
	
	
   return 0;
}
