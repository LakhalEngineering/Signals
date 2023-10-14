#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void handler(int num){
    write(STDOUT_FILENO, "I won't die!\n",13); // "write" is Asynchrnous function
}

int main()
{
    while(1)
    {
        signal(SIGINT, handler); // Write signal to modifie process
        printf("Wasting your cycles. %d\n", getpid());
        sleep(1);
    }
}