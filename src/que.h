#ifndef QUE_H
#define QUE_H

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
};

// function to create a queue of given capacity.
// It initializes size of queue as 0

struct Queue* createQueue(unsigned capacity);

void enqueue(struct Queue* queue, int item);

int dequeue(struct Queue* queue);

int front(struct Queue* queue);

int rear(struct Queue* queue);


#endif
