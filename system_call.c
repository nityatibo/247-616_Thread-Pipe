/**
 * @file system_call.c
 * 
 * @brief   Exemple de code C pour des appels systèmes 
 *          (équivalent à une commande dans un émulateur de terminal, ou un script Bash)
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 *affiche "processus 1"
 *attend 10 seconde
 *affiche "processus 3"
 *attend 5 seconde
 *affiche "processus 5"
 *affiche "Terminer"
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10"); // processus 2
  system("echo \"processus 3 \""); 
  system("sleep 5"); // processus 4
  system("echo \"processus 5 \""); 

  printf("\n terminé \n");
  return 0;
}
