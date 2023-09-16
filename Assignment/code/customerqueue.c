#include "customerqueue.h"

int main(){
    // Variable Initialisation
    Customer c_queue[MAX_QUEUE_SIZE];

    pthread_t thread1;

    pthread_create(&thread1, NULL, customer, NULL);
    pthread_join(thread1, NULL);
    return 0;
}

/**************************************************************************************
* IMPORT: none
* EXPORT: none
* RETURN: NULL
* ASSERTION: Periodically reads c_file and puts customer into c_queue.
***************************************************************************************/
void* customer(void* arg)
{
    FILE* file = fopen("c_file.txt", "r"); // Open the file c_file
    int done = FALSE;

    if(file == NULL)
    {
        perror("ERROR: Unable to open c_file file!");
    }
    else
    {
        while(!done)
        { 
            Customer* cust = (Customer*)malloc(sizeof(Customer));
            int custId;
            char sType;

            fscanf(file, "%d %d", &custId, &serviceType);
            cust->customerId = custId;
            cust->serviceType = sType;

            enqueue(cust);

            if(fgetc(file) == EOF)
            {
                done = TRUE;
            }

            if(ferror(file))
            {
                perror("Error reading the file.")
            }

            sleep(TC_WAIT_TIME); // Wait time per line before reading and placing customer in queue.
        }
    }

    fclose(file);   //Close the file

    FILE* file = fopen("rlog.txt", "a");   // Open the r_log file in append mode 
    

    return NULL;
}