#include "queue.h"

/******************************************************************************************
* IMPORT: none
* EXPORT: none
* RETURN: boolean (int)
* ASSERTION: Checks if queue is Empty
*******************************************************************************************/
int isEmpty()
{
    int boolean = FALSE;
    if(rear == -1 && front == -1)
    {
        boolean = TRUE;
    }
    return boolean;
}

/******************************************************************************************
* IMPORT: none
* EXPORT: none
* RETURN: boolean (int)
* ASSERTION: Checks if queue is full
*******************************************************************************************/
int isFull()
{
    int boolean = FALSE;
    if(front == MAX_QUEUE_SIZE - 1)
    {
        boolean = TRUE;
    }
    return boolean;
}

/******************************************************************************************
* IMPORT: none
* EXPORT: new item in array
* RETURN: void
* ASSERTION: intert a customer into the queue
*******************************************************************************************/
void enqueue(Customer* customer)
{
    if(isFull() == FALSE)
    {
        c_queue[front] = customer;
        front++;
    }
}

/******************************************************************************************
* IMPORT: none
* EXPORT: removed item in array
* RETURN: void
* ASSERTION: remove the customer at front of the queue.
*******************************************************************************************/
void dequeue()
{
    Customer* frontCust = NULL;
    if(isEmpty() == FALSE)
    {
        frontCust = c_queue[0];
        for(int i = 0; i < front - 1; i++)
        {
            c_queue[i] = c_queue[i + 1];
        }
        font--;
    }
    free(frontCust);
}