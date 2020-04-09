#include <stdio.h>
#include <string.h>

struct ogrenci{
	char ad[20];
	char soyad[20];
	float ort;
};

#define LENGTH 4

void bubbleSortOrt(struct ogrenci *oPtr);

int main()
{
	
	
	struct ogrenci liste[LENGTH];
	struct ogrenci *oPtr = liste;
	
	for(int i = 1; i<5; i++)
	{
		printf("%d adi,soyadi,ortalamasini giriniz : ",i);
		scanf("%s %s %f",liste[i-1].ad,liste[i-1].soyad,&liste[i-1].ort);
		
		printf("\n");
	}
	
	printf("------------Liste--------------\n");
	bubbleSortOrt(oPtr);
	for(int a = 0; a < LENGTH; a++)
	{
		printf("\n%s %s %.2f",oPtr[a].ad,oPtr[a].soyad,oPtr[a].ort);
		
	}


	return 0;
}
void bubbleSortOrt(struct ogrenci *oPtr)
{
	int i = 0;
	int k= 0;
	struct ogrenci temp;
	int a = 0;
	
	
	for(i ; i< LENGTH ; i++)
	{
		for(k ; k < LENGTH-1 ; k++)
		{
			if(oPtr[k].ort < oPtr[k+1].ort)
				{
					temp = oPtr[k];
					oPtr[k] =oPtr[k+1];
					oPtr[k+1] = temp;
					
				}
			
		}
			k = 0;
	}	
}
