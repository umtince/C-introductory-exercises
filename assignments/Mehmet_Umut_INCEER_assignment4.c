/*
Mehmet Umut ÝNCEER
21995537  BÝL101-2
Assignment-4
*/

#include <stdio.h> //stdio.h is the header file for standard input and output
#include <time.h>  //contains time function prototype    (header file)
#include <stdlib.h>//contains rand() functions           (header file)

// variables related to Spider-Man 
enum MoveS {spiderSense, spiderWeb, superAgility_Speed } moveSpiderMan; // moves of Spider-Man enumerated
int spiderManEnergy = 100; //Spider-Man's energy/health level

// variables related to the Green Goblin
enum MoveG {jack_O_Lantern, razorBats, ghostBomb } moveGreenGoblin; // moves of Green Goblin enumerated
int greenGoblinEnergy = 100; //Spider-Man's energy/health level

// function prototypes
void spiderManAttacks();
void greenGoblinAttacks();
void printEnergies();

int main() // every c program has to have main() function to work
{	
	printf("Battle begins!!!");
	srand(time(NULL)); // seed for rand() function that generates random seeds based on time 
	
	int coinFlip = rand() % 2; // flips a coin to determine who starts attacking first
	
	if(coinFlip == 0) // heads (Spider-Man starts attacking first)
	{
		while(spiderManEnergy > 0 && greenGoblinEnergy > 0) //Heroes attack each other until their health/energy points are above 0
		{   
		    spiderManAttacks(); // (Spider-Man starts attacking first) and the loop continues
			printEnergies();
			greenGoblinAttacks();
			printEnergies();
		}
		if(spiderManEnergy <= 0 && greenGoblinEnergy <= 0)  // If both health/energy points are below 0 when the fight ends batte ends in a tie
			printf("Battle ends in a tie!");
			
		printf("\nBattle ends!");		 // If only one hero's health/energy point is below 0, battle ends
		if(spiderManEnergy < greenGoblinEnergy) // Whose health/energy point is above 0 wins the fight
			printf("\nGreen Goblin won! Yeah Jack-o%c-lanterns!",39);  // 39 is the ascii decimal value for (')
		else
			printf("\nSpider-Man wins! Yeah Spidey rules!");	
	}
	else // tails (Green Goblin starts attacking first)
	{	
		while(spiderManEnergy > 0 && greenGoblinEnergy > 0)  // Heroes attack each other until their health/energy points are above 0
		{
			greenGoblinAttacks();  // (Green Goblin starts attacking first) and the loop continues
			printEnergies();
			spiderManAttacks();
			printEnergies();
		}
		if(spiderManEnergy <= 0 && greenGoblinEnergy <= 0)  // If both health/energy points are below 0 when the fight ends batte ends in a tie
			printf("Battle ends in a tie!");
		
		printf("\nBattle ends!");  // If only one hero's health/energy point is below 0, battle ends
		if(spiderManEnergy < greenGoblinEnergy)   // Whose health/energy point is above 0 wins the fight
			printf("\nGreen Goblin won! Yeah Jack-o%c-lanterns!",39);  // 39 is the ascii decimal value for (')
		else
			printf("\nSpider-Man wins! Yeah Spidey rules!");
	}	
	return 0;
}

void spiderManAttacks() //Spider-Man's attack function  (determines his moves based on a percentage rate)
{
	int probability = 1 + rand() % 100;  // determines which move is going to happen based on time (random number between 1 and 100)
	
	if(probability <= 45)  // Move 1 happens at a rate of %45
		moveSpiderMan = 0;
	else if (probability <= 65) // Move 2 happens at a rate of %20
		moveSpiderMan = 1;
	else                        // Move 3 happens at a rate of %35
		moveSpiderMan = 2;
		
	switch (moveSpiderMan) // Spider-Man has 3 moves (as written in enum MoveS)
	{
		case 0: // Move 1: Spider Sense
			printf("\nSpider-Man uses spider-sense!");
			greenGoblinEnergy -= 5; // decreases Green Goblin's energy/health level by 5 points
			break;
		
		case 1: // Move 2: Spider Web
			printf("\nSpider-Man shoots spider web!");
			greenGoblinEnergy -= 8; // decreases Green Goblin's energy/health level by 8 points
			break;
			
		case 2: //Move 3: Super Agility and Speed
			printf("\nSpider-Man uses super agility and speed!");
			greenGoblinEnergy -= 11; // decreases Green Goblin's energy/health level by 11 points
			break;
	}			
}

void greenGoblinAttacks() //Green Goblin's attack function  (determines his moves based on a percentage rate)
{
	int probability = 1 + rand() % 100;  // determines which move is going to happen based on time (random number between 1 and 100)
	
	if(probability <= 45) // Move 1 happens at a rate of %45
		moveGreenGoblin = 0;
	else if (probability <= 85) // Move 2 happens at a rate of %40
		moveGreenGoblin = 1;
	else                        // Move 3 happens at a rate of %15
		moveGreenGoblin = 2;
	
	switch (moveGreenGoblin) //Green Goblin has 3 moves (as written in enum MoveG)
	{
		case 0: //Move 1: Jack-o'-lantern
			printf("\nGreen Goblin throws a jack-o%c-lantern!",39); // 39 is the ascii decimal value for (')
			spiderManEnergy -= 4; // decreases Spider-Man's energy/health level by 4 points
			break;
		
		case 1: //Move 2: Razor Bats
			printf("\nGreen Goblin sends out razor bats!");
			spiderManEnergy -= 6; // decreases Spider-Man's energy/health level by 6 points
			break;
			
		case 2: //Move 3: Ghost Bomb
			printf("\nGreen Goblin throws a ghost bomb!");
			spiderManEnergy -= 12; // decreases Spider-Man's energy/health level by 12 points
			break;
	}				
}

void printEnergies() //prints energy/health points each hero has at the end of every attack
{
	printf("\nSpider-Man: %d      Green Goblin: %d",spiderManEnergy,greenGoblinEnergy);
}

