#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include <process.h>


int main() {
    if (fork() == 0) {
        printf("child my pid is %d ppid is %d\n", getpid(), getppid());
        if (fork() == 0) {
            printf("child my pid is %d ppid is %d\n", getpid(), getppid());

            if (fork() == 0) {
                printf("child my pid is %d ppid is %d\n", getpid(), getppid());
            }
        }

    } else
        printf("father my pid is %d ppid is %d\n", getpid(), getppid());

    for (int i = 0; i < 3; i++)
        wait(NULL);
}


