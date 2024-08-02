/**
 * @file    fork2.c
 * 
 * @brief   Exemple de code C pour des processus (thread) avec la commande fork, 
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

const char* processusPereOuFils;

/// @brief Code exécuté par le processus Père
/// @param  aucun
void codeDuProcessusPere(void)
{
    processusPereOuFils = "Processus Père";
    printf("Je suis %s\n", processusPereOuFils);
}

/// @brief Code exécuté par le processus Fils
/// @param aucun
void codeDuProcessusFils(void)
{
    processusPereOuFils = "Processus Fils";
    printf("Je suis %s\n", processusPereOuFils);
}

/// @brief Exemple de processus Père/Fils avec la finction 'fork'
/// @return 0
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
