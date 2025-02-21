#include <stdio.h>
#include <unistd.h>

int main()
{

    printf("Process started. PID:%d\n",getpid());
    sleep(10);
    printf("Process exiting...\n");


    return 0;
}
