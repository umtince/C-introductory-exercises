#include <stdio.h>

void ArraySortAndMerge(int a1[],int a2[],int elementB,int element1,int element2);
int main()
{
	int element1,element2,elementB;
	int i=0;
	
	
	printf("Input the number of elements to be stored in the first array:");
	scanf("%d",&element1);
	int	a1[element1];
	printf("\nInput %d elements in the array:",element1);
	do
	{
		printf("\nelement-%d :",i);
		scanf("%d",&a1[i]);
		i++;

	}while(i<=element1-1);
	
	i=0;
	
	printf("Input the number of elements to be stored in the second array:");
	scanf("%d",&element2);
	int	a2[element2];
	printf("\nInput %d elements in the array:",element2);
	do
	{
		printf("\nelement-%d :",i);
		scanf("%d",&a2[i]);
		i++;

	}while(i<=element2-1);
	

	elementB = element1 + element2;
	
	printf("The merged array in decending order is:\n");
	
	ArraySortAndMerge(a1,a2,elementB,element1,element2);
	
	
	return 0;
}

void ArraySortAndMerge(int a1[],int a2[],int elementB,int element1,int element2)
{
	int i,k,b[elementB],temporary;
	
	for(i=0; i<= element1-1; i++)
	{
		b[i] = a1[i];
	}
	for(k=0; k<= element2-1; k++)
	{
		b[k+element1] = a2[k];
	}
	
	
	
	
	for(int pass=0; pass< elementB; pass++)
	{
		for(int k=0; k<elementB-1; k++)
		{	
			
			if(b[k]<=b[k+1])
			{	
				temporary = b[k];
				b[k] = b[k+1];
				b[k+1] = temporary;
				
			}
		}
	}
	for(int j=0; j< elementB; j++)
	{
		printf("%d  ",b[j]);
	}
}
	
	
	
	
	
	
	
	
	
	
	


