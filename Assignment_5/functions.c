// Rami Musleh - Prog71990w25 - Assignment 5

#define _CRT_SECURE_NO_WARNINGS
#include "globals.h"

#include "functions.h"
#include "stack.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

size_t UserNameLength(char* userName) {
	return strlen(userName) - 1;
	
}

bool ValidateUserInputCharacters(char* userName) {

	for (int i = 0; i < UserNameLength(userName); i++) {
		if (isalpha(userName[i]) == 0) {
			fprintf(stderr, "Invalid: Do not Use numbers or special characters\n");
			return false;
		}
	}

	return true;
}

void PrintNameBackwards(STACK* stack) {
	int popVal = 0;
	printf("Name Backwards: ");
	for (int i = stack->size; i > 0; i--) {
		Pop(stack, &popVal);
		printf("%c", stack->character[i - 1]);

	}
	printf("\n");
}

int GetInputSize(char* userInput) {
	int userInputLength = 0;
	for (int i = 0; i < strlen(userInput); i++) {
		userInputLength++;
	}

	return userInputLength;
}