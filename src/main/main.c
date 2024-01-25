#include "hello.h"
#include "version.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("%s: Usage: <name>\n", argv[0]);
    return EXIT_FAILURE;
  }

  printf("Version: %d.%d\n", Hello_VERSION_MAJOR, Hello_VERSION_MINOR);

  char *got;
  got = say_hello(argv[1]);
  printf("%s\n", got);
  free(got);
}
