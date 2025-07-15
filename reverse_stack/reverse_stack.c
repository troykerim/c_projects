#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Function to create an empty stack
int* createStack() {
    int *stack = (int*) malloc(MAX_SIZE * sizeof(int));
    return stack;
}

// Check if the stack is empty
int isEmpty(int top) {
    return (top == -1);
}

// Check if the stack is full
int isFull(int top) {
    return (top == MAX_SIZE - 1);
}

// Function to push an element to the stack
void push(int *stack, int *top, int item) {
    if (isFull(*top)) {
        printf("Stack is full\n");
        return;
    }
    stack[++(*top)] = item;
}

// Function to pop an element from the stack
int pop(int *stack, int *top) {
    if (isEmpty(*top)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[(*top)--];
}

// Push an element to the bottom of the stack
void push_to_bottom(int *stack, int *top, int item) {
    if (isEmpty(*top)) {
        push(stack, top, item);
    } else {
        // Pop an element from the top of the stack
        int temp = pop(stack, top);
        // Recursively push the item to the bottom of the stack
        push_to_bottom(stack, top, item);
        // Push the popped element back to the stack
        push(stack, top, temp);
    }
}

// Function to reverse a stack using two stacks
void reverse_Stack(int *stack, int *top) {
    int temp;
    if (isEmpty(*top)) {
        return;
    } else {
        // Pop an element from the top of the stack
        temp = pop(stack, top);
        // Reverse the remaining stack
        reverse_Stack(stack, top);
        // Push the popped element to the bottom of the stack
        push_to_bottom(stack, top, temp);
    }
}

int main() {
    int *stack = createStack();
    int top = -1;    
    push(stack, &top, 10);
    push(stack, &top, 20);
    push(stack, &top, 30);
    push(stack, &top, 40);
    push(stack, &top, 50);

    printf("Original Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    reverse_Stack(stack, &top);

    printf("Reversed Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    free(stack);
    return 0;
}