#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

/* global variables */
extern int stack[LIMIT]; // Array implementation of stack
extern int top; // To insert and delete the data elements in the stack
extern int item; // To traverse the loop to while displaying the stack
extern int choice; // To choose either of the 3 stack operations


void push();
void pop();
void display();

#endif
