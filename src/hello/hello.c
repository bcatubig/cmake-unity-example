#include "hello.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *say_hello(char *name) {
  char *greeting = "Hello, ";
  char *result =
      malloc(sizeof(char) * strlen(greeting) + sizeof(char) * strlen(name));

  if (result == NULL) {
    printf("ERROR: failed to allocate space for greeting message\n");
    return NULL;
  }

  strcpy(result, greeting);
  strcat(result, name);
  strcat(result, "!");

  return result;
}
