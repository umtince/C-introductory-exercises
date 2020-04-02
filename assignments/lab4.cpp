#include <stdio.h>
#include <string.h>


int main()
{
	char sentence[100];
	char sentence2[100];
	int i = 0;
	printf("Enter a sentence:");    
	gets(sentence);                        //reads input from console
	
	int uzunluk = strlen(sentence);          //calculates total index numbers
	 
	
	while(sentence[i] != '\0')
	{
		if(sentence[i] == 'a')                  //increments i until it finds first 'a'
		{
			break;
		}
		i++;
	}

	int k = 0;
	for(i; i < uzunluk; i++)                     //copies the string starting from the index number which includes 'a'
	{	
		sentence2[k] = sentence[i];
		k++;
	}
	printf("\nThe substring = %s",sentence2);             //prints new string
	
	return 0;
}
