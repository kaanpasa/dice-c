#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int dice, quantity, i;
	printf("How many dices will roll ?: ");
	scanf("%d", &quantity);
	srand(time(NULL));
	for(i=0; i<quantity; i++){
		dice=1+rand()%6;
		printf("\n%d. Dice: %d", i+1, dice);
	}
	
	return 0;
}
