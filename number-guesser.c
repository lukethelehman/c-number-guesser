#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	char name[20];
	int guess;
	int turn = 0;
	int keepGoing = 1;
	int correct = ((rand() % 100) + 1);

	printf("Hello! What is your name? \n");
	scanf("%s", name);
	printf("Hi, %s, let's play a game! \n", name);

	while (keepGoing == 1 ) {
		turn ++;
		printf("Guess a number between 1-100! \n");
		scanf("%d", &guess);
		
		if (guess < correct) {
			printf("Too low!\n");
		}
		if (guess > correct) {
			printf("Too high!\n");
		}
		if (guess == correct) {
			printf("Right on!\n");
			keepGoing = 0;
		}


	}













	/*
	for (int i = 0; i < 10; i++){
	int myNumber = (rand() % 6) + 1;
	printf("%d \n", myNumber);}
	return 0;
	*/

} //end main
