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
 * 
 *
 *
 *
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10");
  system("echo \"processus 2 \""); 
  system("sleep 5");
  system("echo \"processus 3 \""); 

  printf("\n terminé \n");
  return 0;
}
