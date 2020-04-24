/* MEHMET UMUT ÝNCEER BÝL124-01 EXAM 2 - */



#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct table{
	
	char character[36] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','Y','Z','1','2','3','4','5','6','7','8','9','0'};
	char *code[36] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};                                          

};

//function prototypes
void englishToMorse(char *phrase);
void morseToEnglish(char *phrase);

int main()
{
	char phrase[256]; //string variable 
	int selection;	
	
	do
	{
			printf("This program implement Morse Code Convertor.\n\n");
			printf("Press 1 to convert from Morse code and press 2 to convert to Morse code:\n\n");
			scanf("%d",&selection);
			getchar();  //getcahr() is used to overcome the bug when you use scanf() before gets()
		
		//gives user two options to choose from. Acccording to the chosen value, program executes different functions
		if(selection == 1)
		{
			printf("\nEnter message to encode:\n\n");
			gets(phrase); //reads input
			printf("\nEncoded message is:\n\n");
			englishToMorse(phrase);  //sends the string to function (pass by reference)
		
		}
		else if(selection == 2)
		{
			printf("\nEnter Morse code to decode:\n\n");
			gets(phrase); //reads input
			printf("\nDecoded message is:\n\n");
			morseToEnglish(phrase);  //sends the string to function (pass by reference)
		}
		
	}while(!(selection == 1  || selection == 2));  //unless user inputs 1 or 2 loop continues
	

	return 0;
}

void englishToMorse(char *phrase)  //english to morse function body
{

	struct table eTm;    //variable eTm in struct table type
	int characterIndex = 0; //index control variables
	int phraseIndex = 0;
	
	int passCtr = 0;  //loop breaker variable for optimization
	
	while(phrase[phraseIndex] != '\0')
	{
		for(characterIndex = 0; characterIndex < 36; characterIndex++)
		{
			if(toupper(phrase[phraseIndex]) == ' ')  //converts inputs to upper case letters and controls if that index of string phrase is equal to space or not.
			{
				printf("&");  //if it i equal prints &
				break;
			}
			
			if(toupper(phrase[phraseIndex]) == eTm.character[characterIndex])  //converts inputs to upper case letters and finds which index they are in eTm variables character member.
			{
				passCtr = 1;
				if(phrase[phraseIndex+1] == ' ')           //output customization to follow assignment rules
					printf("%s",eTm.code[characterIndex]);
				else
					printf("%s ",eTm.code[characterIndex]);
			}
		
			if(passCtr == 1)
				break;
		}	
	
		phraseIndex++;
	
		passCtr = 0;
	}
}

void morseToEnglish(char *phrase)       //morse to english function body
{
	struct table mTe;     //mTe variable of type struct table
	int codeIndex = 0;    //index control variables
	int phraseIndex = 0;
	char *token; 		//char pointer
	char space[] = " "; 
	char *tokenAmpersand;  //char pointer
	char ampersand[] = "&";
	
	tokenAmpersand = strtok(phrase,ampersand);  //firstly it tokens phrase accoring to ampersand 
	
	int length = strlen(tokenAmpersand);	//calculates first token's length to be used in memory arithmetic later on 
	
	while(tokenAmpersand != '\0')
	{
		token = strtok(tokenAmpersand,space);   //tokens the already tokened string according to spaces
		
		while(token != '\0')
		{
			for(codeIndex = 0; codeIndex < 36; codeIndex++)
			{
				if(!strcmp(token,mTe.code[codeIndex]))   //compares 2th time tokened string to mTe variables code members
				{
					printf("%c",mTe.character[codeIndex]);  //prints latin version according to index variable
					break;
				}
			}
			token = strtok(NULL,space);  // continues to token according to spaces
		}
		
	
		tokenAmpersand = strtok((tokenAmpersand + length +1),ampersand);	//because we tokened 2 different strings we need to adjust strtok's internal position to continue tokening according to ampersand
	
		printf(" "); //prints a space because assignment rules say so
		
		if(tokenAmpersand != NULL)
		{
			length = strlen(tokenAmpersand);  //recalculates token length to perform the operation at line 112 in the following loops
		}
	
	}	

}
/*MEHMET UMUT ÝNCEER BÝL124-01 EXAM 2 - */
