#define _XOPEN_SOURCE 800

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

const char* processusPereOuFils;

void codeDuProcessusPere(void)
{
    processusPereOuFils = "Processus Père";
    printf("Je suis %s", processusPereOuFils);
}

void codeDuProcessusFils(void)
{
    processusPereOuFils = "Processus Fils";
    printf("Je suis %s", processusPereOuFils);
}

int main() 
{
    pid_t pid;
    pid = fork();
    if (pid == 0) {
        codeDuProcessusFils();
    }
    else {
        codeDuProcessusPere();
    }
    return 0;
}
