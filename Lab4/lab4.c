#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <fcntl.h>

int main() {
  int i;
  char buf[100];
// ouvrir un le stdin en lecture non bloquante
//  fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);
    for (i = 0; i < 10; i++) {
        int nb;
        nb = read(STDIN_FILENO, buf, 100);
        //
        printf("nwrites = %d\terror = %d\n", nb, errno);
        //On affiche le nb d'octet lu puis la valeur de errno.
    }
}
