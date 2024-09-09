/**
 * @file    fork2.c
 * 
 * @brief   Exemple de code C pour des processus (thread) avec la fonction fork, 
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
//#define _XOPEN_SOURCE 800
#define _GNU_SOURCE 

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h> 

const char* processusPereOuFils;

/// @brief Code exécuté par le processus Père
/// @param  aucun
void codeDuProcessusParent(void)
{
    processusPereOuFils = "Processus Père";
    
    printf("Je suis %s\n", processusPereOuFils);
}

/// @brief Code exécuté par le processus Fils
/// @param aucun
void codeDuProcessusEnfant(void)
{
    processusPereOuFils = "Processus Fils";
    
    printf("Je suis %s\n", processusPereOuFils);
}

/// @brief Exemple de processus Père/Fils avec la fonction 'fork'
/// @return 0
int main() 
{
    pid_t pid;
    pid = fork();

    // Appel fonction Enfant
if (pid == 0)
{
codeDuProcessusEnfant();

}

    // Appel fonction Parent
else
{
codeDuProcessusParent();
wait(NULL);
}
    
    return 0;
}
