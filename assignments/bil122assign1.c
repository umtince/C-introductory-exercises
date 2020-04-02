#include <stdio.h>
#include <ctype.h>

void changeSentence(char *sentence);
int main()
{
	char sentence[256];                //creates string
	printf("Enter a sentence: ");
	gets(sentence);					   //reads the string from console
	puts("----------------");
	changeSentence(sentence);          //sends string variable to function by pass by reference method
	printf("After conversion = %s",sentence); //prints the sentence variable which was modified in changeSentence funtion
	
	return 0;
}

void changeSentence(char *sentence)
{
	int a = 0;                             // index control variable
	if(a == 0 && islower(sentence[a]))  // checks if first letter is lower case or not, 
		sentence[a] = toupper(sentence[a]);           // if its lower case converts it to upper case letter
	a += 1;
	while(sentence[a] != '\0')
	{
		if(sentence[a-1] == ' ' && islower(sentence[a]))  //checks every letter which comes after a space
		sentence[a] = toupper(sentence[a]);               //character and converts it to upper case letter
													      //if it is lower case letter
	a++;
	} 													  
}


//Mehmet Umut ÝNCEER 21995537
