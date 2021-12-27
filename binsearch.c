#include <stdio.h>

int main() {
	// initialize variables
	int min, max, num, guess, guesses;

	// declare variables 
	printf("minimum: ");
	scanf("%d", &min);

	printf("maximum: ");
	scanf("%d", &max);
	if (max <= min) {
		printf("error: max is <= min");
		return 1;
	}

	printf("number: ");
	scanf("%d", &num);
	if (num < min || num > max) {
		printf("error: number not in range");
		return 1;
	}

	// binary search
	guesses = 0;
	while (1) {
		guesses += 1;
		guess = (min + max) / 2;
		if (guess < num) {
			printf("guess %d: %d | too low\n", guesses, guess);
			min = guess;
		} else if (guess > num) {
			printf("guess %d: %d | too high\n", guesses, guess);
			max = guess;
		} else if (guess == num) {
			printf("guess %d: %d | correct!\n", guesses, guess);
			break;
		}
	}

	return 0;
}
