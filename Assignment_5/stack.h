// Rami Musleh - Prog71990w25 - Assignment 5 Refactor

#pragma once

#include <stdbool.h>
#include "globals.h"
#include "list.h"


// ** NEW CODE **

// I used an array in Assignment 5, so for the refactor I will use
// a linked list

typedef struct listnode {
	char data;
	struct listnode* next;

} LISTNODE, * PLISTNODE;



//FUNCTIONS

void CreateLinkedList(PLISTNODE* head, char* userInput, int inputLength);

void PushChar(PLISTNODE* head, char c);

void PrintHead(char c);

void PeekChar(PLISTNODE* head);

void PopChar(PLISTNODE head);

void PrintListBackwards(PLISTNODE* head);

void DeleteLinkedList(PLISTNODE head);



// ** OLD CODE **
//
//typedef struct stack {
//	int* collection;
//	char* character;
//	int capacity;
//	int size;
//
//} STACK;
//
//
//STACK* CreateStack(int capacity);
//
//void DestroyStack(STACK* stack);
//
//bool IsFull(STACK* stack);
//
//bool IsEmpty(STACK* stack);
//
//bool Pop(STACK* stack, int* item);
//
//bool Push(STACK* stack, int item, char character);
//
//bool Peek(STACK* stack, int* item);
//
//void AddNameToStack(STACK* stack, char* userName);