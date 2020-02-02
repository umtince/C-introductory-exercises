#include <stdio.h>

int main()
{
	int size,insertedValue,position,temp,temp2;
	
	printf("Input the size of array:");
	scanf("%d",&size);
	
	int array[100] = {0};
	int i=0;
	do
	{
		printf("element-%d: ",i);
		scanf("%d",&array[i]);
		i++;
	}while(i < size);
	
	printf("\nThe current list of the array :");
	for(int m=0; m < size; m++)
	{
		printf("%d  ",array[m]);
	}
	
	size++;
	array[size];
	
	printf("\nInput the value to be inserted: ");
	scanf("%d",&insertedValue);
	
	printf("\nInput the Position, where the value to be inserted :");
	scanf("%d",&position);
	
	
	for(int k=size-1 ; k >= position-1 ; k--)
	{
		array[k+1] = array[k];
	}
		array[position-1] = insertedValue;
	
	printf("\nAfter Insert the element the new list is :");
	
	for(int j=0; j < size; j++)
	{
		printf("%d  ",array[j]);
	}
	

	return 0;
}
