#include <stdio.h>
#include <stdlib.h>

struct monster{
	int attackID;
	char *monsterName[41];
	char *attackLocation[41];
	int numberVictims;
};

int numAttacks = 0;

struct monster *monsterAttacks(){	
	printf("Enter number of attacks: ");
	scanf("%d", &numAttacks);
	
	struct monster *curr_monster;
	struct monster *monsters = (struct monster *) malloc(numAttacks * sizeof(struct monster));
	
	for (int i = 0; i < numAttacks; i++){
		curr_monster = monsters + i;
		curr_monster->attackID = (i+1);
		printf("Enter monster name: ");
		scanf("%s", &curr_monster->monsterName);
		printf("Enter attack location: ");
		scanf("%s", &curr_monster->attackLocation);
		printf("Enter victim count: ");
		scanf("%d", &curr_monster->numberVictims);
		printf("\n");	
	}
	return monsters;
}

void toString(struct monster *arrayIn, int arraySize){
	struct monster *ap; 
	ap = arrayIn; 
	struct monster *end = ap+arraySize; 
		
	do {
		printf("Attack ID: %d\nMonster Name: %s\nAttack Location: %s\nVictim Count: %d\n\n", 
		ap->attackID, ap->monsterName, ap->attackLocation, ap->numberVictims); 
		ap++;
	}while (ap != end);
}

void totalVictims(struct monster *arrayIn, int arraySize){
	struct monster *ap;
	ap = arrayIn;
	struct monster *end = ap+arraySize;
	int victimCount = 0;
	do{
		victimCount += ap->numberVictims;
		ap++;
	}while (ap != end);
	printf("Total Victims: %d\n",victimCount);
}

int main(int argc, char **argv){
	struct monster *x = monsterAttacks();

	toString(x, numAttacks);
	totalVictims(x, numAttacks);
	
	return 0;
}
