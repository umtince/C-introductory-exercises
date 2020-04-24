#include <stdio.h>

struct meeting{
	
	char firstName[20];
	char lastName[20];
	int jerseyNumber;
};

int main()
{
	FILE *mPtr;
	
	int i = 0;
	struct meeting array[20];
	
	int numbera[20] = {0};
	int index;
	mPtr = fopen("meeting.txt","r");   
	
	
		while(!feof(mPtr))

		{
			
			fscanf(mPtr,"%s%s%d",array[i].firstName,array[i].lastName,&array[i].jerseyNumber);   
			index = array[i].jerseyNumber;
			numbera[index-1] = array[i].jerseyNumber;   
			i++;
		}
	

	
	int a = 0;
	FILE *aPtr;
	aPtr= fopen("absent.txt","w");

	 
	fprintf(aPtr,"Jersey numbers of absent players\n");
		for(a =0; a <20; a++)                   
		{
			if(numbera[a] == 0)
			{
				fprintf(aPtr,"%d\n",a+1);
			}
		}
	
		
	
	
	
	return 0;
}









