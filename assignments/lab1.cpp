#include <stdio.h>
#include <string.h>

int main()
{
	char sentence[50];
	char *tokenPtr;
	char sentence2[50];
	char three[5];
	

	printf("Enter a sentence: ");
	gets(sentence);                       //reads sentence from console
	strcpy(sentence2,sentence);				//copies string to another string
	
	tokenPtr = strtok(sentence," ");      //tokenize to find 3rd word
	int i = 0;
	for(i; i<2; i++)
	{
		tokenPtr = strtok(NULL," ");
	}
	
	printf("\n3. word in the sentence = %s",tokenPtr);   //prints 3rd word
	
	strncat(tokenPtr,sentence2,3);						//concenates first 3 letters from sentence2 to token
	
	printf("\n3. word after appending = %s",tokenPtr);  //prints tokenized and concenated word
	
	return 0;
}
