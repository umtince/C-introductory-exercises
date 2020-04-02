#include <stdio.h>
#include <string.h>


int main()
{
	char sentence[100];
	float wordCount = 0;
	float word = 1;							
	float bosluk = 0;
	
	printf("Enter a sentence: ");
	gets(sentence);							//reads input from console
	wordCount = strlen(sentence);           //calculates word count including spaces
	
	int i = 0;
	while(sentence[i] != '\0')
	{
		if(sentence[i] == ' ')            //when a space found, word is increased and bosluk is increased
			{								//For example: if there are 3 spaces there is 4 words
				bosluk++;
				word++;	
			}
			
			i++;
	}
	
	wordCount = wordCount - bosluk;   //calculates wordcount without spaces
	wordCount = wordCount/word;          //calculates average
	printf("Average of characters per word = %.2f",wordCount);        //prints average

return 0;	
}
	

