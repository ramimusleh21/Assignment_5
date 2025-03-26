// Rami Musleh - Prog71990w25 - Assignment 5

#pragma once

#include "globals.h"
#include <stdbool.h>

typedef struct stack {
	int* collection;
	char* character;
	int capacity;
	int size;

} STACK;


STACK* CreateStack(int capacity);

void DestroyStack(STACK* stack);

bool IsFull(STACK* stack);

bool IsEmpty(STACK* stack);

bool Pop(STACK* stack, int* item);

bool Push(STACK* stack, int item, char character);

bool Peek(STACK* stack, int* item);

void AddNameToStack(STACK* stack, char* userName);