#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

const char* processusPereOuFils;
int main() 
{
pid_t pid;
processusPereOuFils = "Processus Père";
pid = fork();
printf("Je suis %s\n", processusPereOuFils);

return 0;
}
