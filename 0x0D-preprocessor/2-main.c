#include <stdio.h>

int main() {
  char filename[100];
  char *ptr = malloc(sizeof(filename));
  strcpy(ptr, _FILE_);
  free(ptr);
  return 0;
}
