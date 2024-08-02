#include <stdlib.h>
int main() {
  system("echo \"processus 1 \""); 
// on utilise \" pour avoir un " dans une chaîne délimitée par des "
  system("sleep 10 &");
  system("echo \"processus 2 \""); 
  system("sleep 5");
  system("echo \"processus 3 \""); 
  return 0;
}