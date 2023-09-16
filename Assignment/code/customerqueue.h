#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include "queue.h"


// Variable Declarations
#define MAX_QUEUE_SIZE 100 // maximum number of customers that can be in the queue
#define TC_WAIT_TIME 5 // wait time for reader to put customer in queue
#define TD_SERVICE_TIME 2 // Cash-Deposit time (seconds)
#define TW_SERVICE_TIME 2 // Cash-Withdrawal time (seconds)
#define TI_SERVICE_TIME 1 // Ask-information time (seconds)

//Global Variables
int front = -1;
int rear = -1;
Customer** c_queue;

typedef struct Customer{
    int customerId;
    char serviceType; 
}Customer;

#endif