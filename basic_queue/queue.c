/*
    Basic Queue using an array.
*/
#include <stdio.h>
#define MAX_SIZE 100 

int queue[MAX_SIZE];  // Create an array to store queue elements
int front = -1;
int back = -1;

// Function to insert an element into the queue
void enqueue(int item)
{
    if(back == MAX_SIZE - 1)
    {
        printf("Error! Queue is full\n");
        return;
    }
    if(front == -1)
    {
        front = 0;
    }
    back++;
    queue[back] = item;
}

// Function to display elements
void display()
{
    if(front == -1 || front > back)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    for(int i = front; i <= back; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Check if the queue is empty
int is_empty()
{
    if(front == -1 || front > back)
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("Initializing a queue!");
    printf("\nCheck the queue is empty or not? %s\n", is_empty() ? "Yes" : "No");
    printf("\nInsert some elements into the queue: \n");
  
    enqueue(1); // Insert element 1 into the queue
    enqueue(2); // Insert element 2 into the queue
    enqueue(3); // Insert element 3 into the queue
    display(); // Display the elements of the queue
    
    printf("\nInsert another element into the queue:\n"); // Print message to indicate inserting another element
    enqueue(4); // Insert element 4 into the queue
    display(); // Display the elements of the queue
    printf("\nCheck the queue is empty or not? %s\n", is_empty() ? "Yes" : "No"); // Print message to check if queue is empty
    return 0; // Return from the main function
}