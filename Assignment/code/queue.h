#ifndef QUEUE_H
#define QUEUE_H

#include "customerqueue.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

/* DEFINE TRUE/FALSE */
#define FALSE 0
#define TRUE !FALSE

/* FORWARD DECLARATIONS */
int isEmpty();
int isFull();
void enqueue (Customer* customer);
void dequeue ();

#endif