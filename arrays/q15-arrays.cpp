#include <stdio.h>

int main()
{
	int size,del;
	
	printf("Input the size of array :");
	scanf("%d",&size);
	int array[size];
	int i=0;
	do
	{
		printf("element-%d: ",i);
		scanf("%d",&array[i]);
		i++;
	}while(i < size);
	
	printf("\nInput the position where to delete:");
	scanf("%d",&del);
	
	printf("\nThe new list is:");
	
	for(int k=del-1; k< size-1; k++)
	{
		array[k] = array[k+1];
	}
	 	array[size-1] = 0;
	 	
	for(int m= 0; m < size-1; m++)
	{
		printf("%d ",array[m]);
	}
	 
	return 0;
}
