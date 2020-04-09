#include <stdio.h>
#include <string.h>

#define LENGTH 10
// struct definition consisting 5 members 
struct Article{
	
	char authors[15];
	int yearPublished;
	char nameOfSource[25];
	char sourceType[15];
	int pageNumbersBE[2];
};

//functions for different operations
void enterInformation(struct Article *aPtr);
void displayInformation(struct Article *aPtr);
void findNewest(struct Article *aPtr);
void sortArticle(struct Article *aPtr);

int main()
{
	struct Article ARTICLE[LENGTH];   //ARTICLE array of LENGTH in type of struct Article
	struct Article *aPtr = ARTICLE;   //pointer to struct Article ARTICLE initialization
	
	//calling functions and fixing output in order to prevent disorder
	printf("\n---------------------------------------\n");
	enterInformation(aPtr);
	printf("\n---------------------------------------\n");
	printf("\nARTICLES\n");
	displayInformation(aPtr);
	printf("\n---------------------------------------\n");
	findNewest(aPtr);
	printf("\n---------------------------------------\n");
	sortArticle(aPtr);
	printf("\n---------------------------------------\n");
	
	return 0;
}

void enterInformation(struct Article *aPtr)
{
	int i = 0;
	
	for(i; i<LENGTH; i++)   //loops and reads input from keyboard to different indexes to aPtr
	{
		printf("Enter the names of Authors(first three) for %d. article(use commas between names): ",i+1);
		scanf("%s",aPtr[i].authors);
		printf("\nEnter publishing year of the %d. article:",i+1);
		scanf("%d",&aPtr[i].yearPublished);
		printf("\nEnter the name of the source of the %d. article:",i+1);
		scanf("%s",aPtr[i].nameOfSource);
		printf("\nEnter the source type of the %d. article:",i+1);
		scanf("%s",&aPtr[i].sourceType);
		printf("\nEnter the beginning of the page number of the %d. article:",i+1);
		scanf("%d",&aPtr[i].pageNumbersBE[0]);
		printf("\nEnter the end of the page number of the %d. article:",i+1);
		scanf("%d",&aPtr[i].pageNumbersBE[1]);
		printf("\n---------------------------------------\n");
	}
}

void displayInformation(struct Article *aPtr)
{
	int k = 0;
	for(k; k<LENGTH; k++)  //loops and displays information from aPtr using int k as index controller
	{
		printf("\nAuthors of the %d. article = %s",k+1,aPtr[k].authors);
		printf("\nPublishing year of the %d article = %d",k+1,aPtr[k].yearPublished);
		printf("\nName of the source of the %d. article = %s",k+1,aPtr[k].nameOfSource);
		printf("\nSource type of the %d. article = %s",k+1,aPtr[k].sourceType);
		printf("\nPage numbers beginning from %d ending at %d of the %d. article",aPtr[k].pageNumbersBE[0],aPtr[k].pageNumbersBE[1],k+1);
		printf("\n\n");
	
	}
}

void findNewest(struct Article *aPtr)
{
	struct Article temp;   //creates temporary variable of type struct article to assign values in bubblesort
	int a = 0;
	int b = 0;
	
	for(a; a < LENGTH; a++)  //usual bubble sort operation according to publish dates
	{
		for(b; b < LENGTH -1 ; b++)
		{
			if(aPtr[b].yearPublished > aPtr[b+1].yearPublished)
			{
				temp = aPtr[b];
				aPtr[b] = aPtr[b+1];
				aPtr[b+1] = temp;
			}
		}
		b = 0;
	}
	//prints newest articles' information
	printf("Information of the newest article\n");
	printf("\nAuthors of the article = %s",aPtr[LENGTH-1].authors);
	printf("\nPublishing year of the article = %d",aPtr[LENGTH-1].yearPublished);
	printf("\nName of the source of the article = %s",aPtr[LENGTH-1].nameOfSource);
	printf("\nSource type of the article = %s",aPtr[LENGTH-1].sourceType);
	printf("\nPage numbers beginning from %d ending at %d",aPtr[LENGTH-1].pageNumbersBE[0],aPtr[LENGTH-1].pageNumbersBE[1]);
	
}

void sortArticle(struct Article *aPtr)
{
	struct Article temp2;  //creates temporary variable of type struct article to assign values in bubblesort
	int a = 0;
	int b = 0;
	
	for(a; a < LENGTH; a++)  //usual bubble sort according to source type lenghts (because book journal and proceedings all have different lenghts)
	{
		for(b; b < LENGTH -1 ; b++)  
		{
			if(strlen(aPtr[b].sourceType) > strlen(aPtr[b+1].sourceType))
			{
				temp2 = aPtr[b];
				aPtr[b] = aPtr[b+1];
				aPtr[b+1] = temp2;
			}
		}
		b = 0;
	}
	printf("\n\nSorted by book>journal>proceeding\n\n");   //prints information of all articles sorted by source types by calling function displayInformation
	displayInformation(aPtr);
}



















