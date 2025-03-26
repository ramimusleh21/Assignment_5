// Rami Musleh - Prog71990w25 - Assignment 5


#include "stack.h"
#include "functions.h"
#include <stdio.h>



int main(void) {
	
	// Initialize
	char userInput[MAX_STRING_LIMIT]; 
	
	// Get Input
	printf("Enter your First Name: ");
	fgets(userInput, MAX_STRING_LIMIT, stdin);
	
	// Validate Input
	if (!ValidateUserInputCharacters(userInput)) {
		return 1;
	}

	// Get length of user input
	int InputLength = GetInputSize(userInput);

	// Initialize stack at size of user input
	STACK* stack = CreateStack(InputLength);
	if (stack == NULL) { 
		fprintf(stderr, "Error Creating Stack");
		return 1;
	}

	if (IsEmpty(stack)) {
		printf("Stack is Empty\n");
	}

	// Push String to stack
	AddNameToStack(stack, userInput);

	if (IsEmpty(stack)) {
		printf("Stack is still Empty\n");
		return 1;
	}
	else {
		printf("String Loaded into stack\n");
	}


	int peekVal = 0;
	Peek(stack, &peekVal);
	printf("Peek Char: %c\n", stack->character[peekVal]);


	// Pop each character off stack
	PrintNameBackwards(stack);

	// Erase the Stack
	DestroyStack(stack);
	return 0;
}