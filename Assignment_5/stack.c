// Rami Musleh - Prog71990w25 - Assignment 5 Refactor

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// ** ANEW CODE **


//FUNCTIONS
void CreateLinkedList(PLISTNODE* head, char* userInput, int inputLength) {

	for (int i = 0; i < inputLength - 1; i++) {

		PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));

		if (newNode == NULL) {
			printf("The Stack Is Empty\n");
			exit(EXIT_FAILURE);
		}

		newNode->data = userInput[i];
		newNode->next = NULL;
		newNode->next = *head;

		*head = newNode;
	}
}

void PeekChar(PLISTNODE* head) {
	printf("Peek Value: ");
	PrintHead((*head)->data);
}

void PushChar(PLISTNODE* head, char c) {

	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));

	if (newNode == NULL) {
		printf("The Stack Is Empty\n");
		exit(EXIT_FAILURE);
	}

	newNode->data = c;
	newNode->next = NULL;
	newNode->next = head;

	head = newNode;

}

void PopChar(PLISTNODE* head) {
	PLISTNODE tmp = NULL;

	if (*head == NULL) {
		printf("The Stack Is Empty\n");
		exit(EXIT_FAILURE);
	}
	else {
		PrintHead((*head)->data);
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}

void PrintHead(char c) {
	printf("%c\n", c);
}

void PrintListBackwards(PLISTNODE* head) {

	while (*head != NULL) {
		PopChar(head);
	}
}

void DeleteLinkedList(PLISTNODE head) {
	free(head);
}

// ** OLD CODE **

//STACK* CreateStack(int capacity) {
//	if (capacity <= 0) {
//		return NULL;
//	}
//
//	STACK* stack = malloc(sizeof(STACK));
//	if (stack == NULL) {
//		return NULL;
//	}
//
//	stack->character = malloc(sizeof(char) * capacity);
//	stack->collection = malloc(sizeof(int) * capacity);
//	if (stack->collection == NULL || stack->character == NULL) {
//		free(stack);
//		return NULL;
//	}
//
//	stack->capacity = capacity;
//	stack->size = 0;
//
//	return stack;
//}
//
//
//void DestroyStack(STACK* stack) {
//	free(stack->collection);
//	free(stack->character);
//	free(stack);
//
//}
//
//
//bool IsFull(STACK* stack) {
//	return stack->capacity == stack->size;
//}
//
//
//bool IsEmpty(STACK* stack) {
//	return stack->size == 0;
//}
//
//
//bool Pop(STACK* stack, int* item) {
//	if (IsEmpty(stack)) {
//		printf("Stack is Empty.\n");
//		return false;
//	}
//
//	stack->size--;
//
//	*item = stack->collection[stack->size];
//	return true;
//}
//
//
//bool Push(STACK* stack, int item, char character) {
//
//	if (IsFull(stack)) {
//		printf("Stack is Full.\n");
//		return false;
//	}
//
//	stack->collection[stack->size] = item;
//	stack->character[stack->size] = character;
//	stack->size++;
//
//	return true;
//}
//
//bool Peek(STACK* stack, int* item) {
//	if (IsEmpty(stack)) {
//		printf("Stack is empty\n");
//		return false;
//	}
//
//	*item = stack->collection[stack->size - 1];
//
//	return true;
//}
//
//void AddNameToStack(STACK* stack, char* userName) {
//
//	size_t userNameLength = strlen(userName) - 1;
//	for (int i = 0; i < userNameLength; i++) {
//
//		Push(stack, i, userName[i]);
//	}
//
//}
//
