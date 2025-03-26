// Rami Musleh - Prog71990w25 - Assignment 5

#pragma once

#include "stack.h"
#include <stdbool.h>


bool ValidateUserInputCharacters(char* userName); 

size_t UserNameLength(char* userName);

void PrintNameBackwards(STACK* stack);

int GetInputSize(char* userInput);