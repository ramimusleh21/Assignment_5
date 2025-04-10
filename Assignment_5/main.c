// Rami Musleh - Prog71990w25 - Assignment 5 Refactor

//Question 1: Create and use a stack

// Specifications : 8.00 / 8.00 (The program works and meets all of the specifications.)

// Readability + Design : 6.00 / 8.00 (The code has some elements of good design and layout,
// but is lacking in some respects or the following issues were noted.)
// —ADT has more than 1 responsibility(stack + user I / O)
 
// Reusability : 4.00 / 4.00 (The code is exceptionally well organized into components
// (pairs of.c + .h files), demonstrating SRP, coupling and cohesion.)

// Documentation : 4.00 / 4.00 (The documentation is well written and clearly explains
// what the code is accomplishing and how.)

#include "stack.h"
#include "functions.h"
#include "list.h"
#include <stdio.h>
#include <string.h>


// Pointer should point to the first character on the heap
// the first character should point to the next character
// then so on and so forth
// The only way to access the next letter is by popping off fthe previous letter

int main(void) {
	
	// Initialize (This is old code)
	char userInput[MAX_STRING_LIMIT] = { 0 };
	strcpy_s(userInput, MAX_STRING_LIMIT, UserInput(userInput)); // Added function to intake input

	// Get length of user input
	int inputLength = GetInputSize(userInput);
	

	// ** NEW CODE **
	PLISTNODE head = NULL;

	CreateLinkedList(&head, userInput, inputLength);

	PeekChar(&head);

	PrintListBackwards(&head);

	DeleteLinkedList(head);
	
	

	// ** OLD CODE **
	
	//printf("ARRAY (OLD): \n");
	//// Initialize stack at size of user input
	//STACK* stack = CreateStack(inputLength);
	//if (stack == NULL) { 
	//	fprintf(stderr, "Error Creating Stack");
	//	return 1;
	//}

	//// Push String to stack
	//AddNameToStack(stack, userInput);

	//if (IsEmpty(stack)) {
	//	printf("Stack is still Empty\n");
	//	return 1;
	//}
	//else {
	//	printf("String Loaded into stack\n");
	//}

	//int peekVal = 0;
	//Peek(stack, &peekVal);
	//printf("Peek Char: %c\n", stack->character[peekVal]);

	//// Pop each character off stack
	//PrintNameBackwards(stack);

	//// Erase the Stack
	//DestroyStack(stack);
	return 0;
}