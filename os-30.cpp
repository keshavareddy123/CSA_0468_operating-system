#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h> 

  

void* func(void* arg) 
{ 

    // detach the current thread 

    // from the calling thread 

    pthread_detach(pthread_self()); 

  

    printf("Inside the thread\n"); 

  

    // exit the current thread 

    pthread_exit(NULL); 
}
