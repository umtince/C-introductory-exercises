#include <stdio.h>
#include <math.h>

/* Question 59 for-loop */

int main()
{
	int digit, input, num,num2;
	int result = 0;
	int counterDigit = 0;
	printf("Input an integer: ");
	scanf("%d",&input);
	
	num = input;
	num2 = input;
	//to calculate how many digits the number consists of
                                    
	while(num !=0)
	{
		counterDigit++;
		num = num/10;
	}
	

	while(num2 != 0)
	{
		result += pow((num2 % 10),counterDigit);
		num2 = num2 / 10;
		
	}   
	
	if(result == input)
		printf("%d is an Armstrong number",input);
	else
		printf("%d is NOT an Armstrong number",input);
	
	
	return 0;
}
