#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

static void * thread_callback_fn(void *arg)
{
    char * input = (char *)arg;
    while (1) {
        printf("input string = %s \n",input);
        sleep(1);
    }

}

void thread_create()
{
    pthread_t pthread1; // `pthread_t`  thread handler

    static char *thread_input1 = "I am thread no 1";

    /* `thread_input1` should be on the heap or a static memory, not the address of a local variable  */
    int rc =  pthread_create(&pthread1 , NULL, thread_callback_fn, (void *)thread_input1);  /* fork point */

    if (rc != 0) {
        printf("Error occurred, thread can not be created, errno = %d\n",rc);
        exit(0);
    }


}

int main()
{
    thread_create();
    printf("main fn paused\n");
    pause();

    return 0;
}

