#include <stdio.h>

// define a structure type of struct Equation
struct Equation{
	
	int a;  //members
	int b;
	int e;
};

int main()
{
	struct Equation value1,value2;													//value1.a and value2.a = first member of structure
																					//value1.b and value2.b = second member of the structure
 		printf("Solving Equations of the form ax+by = e");							//value1.e and value2.e = third member of the structure
		printf("\nEnter 1. Equation (a,b,e): ");
		scanf("%d %d %d",&value1.a,&value1.b,&value1.e);
		printf("\nEnter 2. Equation (a,b,e): ");
		scanf("%d %d %d",&value2.a,&value2.b,&value2.e);
		printf("\n----------------------------");
		
		if(value1.b < 0)													//if b is negative output is modified using these if else statements
			printf("\n%dx%dy=%d",value1.a,value1.b,value1.e);
		else
			printf("\n%dx+%dy=%d",value1.a,value1.b,value1.e);
		if(value2.b <0)
			printf("\n%dx%dy=%d",value2.a,value2.b,value2.e);
		else
			printf("\n%dx+%dy=%d",value2.a,value2.b,value2.e);
		printf("\n----------------------------");
		
		int x,y,dn;
																		//Cramer's rule equations
		dn = ((value1.a * value2.b) - (value2.a * value1.b));
		x = ((value1.e * value2.b)-(value2.e * value1.b)) / dn;
		y = ((value1.a * value2.e) - (value2.a * value1.e)) / dn;
		
		printf("\nSolution: x=%d and y=%d",x,y);	
		
	
	
	return 0;
}
