/**
 * @file system_call_thread.c
 * 
 * @brief   Exemple de code C pour des appels systèmes, 
 *          (équivalent à une commande dans un émulateur de terminal, ou un script Bash)
 *          Avec processus en arrière plan : &
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * Ce programme affiche 3 textes, chacun simulant un processus
 * le premier est affiché instantanément, 
 * le processus 'sleep' de 10 secondes est lancé en arrière plan avec l'argument '&' 
 * 
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10 &"); // processus 2
  system("echo \"processus 3 \""); 
  system("sleep 5"); // processus 4
  system("echo \"processus 5 \""); 

  printf("\n terminé \n");
  return 0;
}
